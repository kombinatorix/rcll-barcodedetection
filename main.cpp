#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <zbar.h>
#include <iostream>
#include <string>
//#include <utils/system/argparser.h>

#include <chrono>

#include <protobuf_comm/client.h>
#include <boost/asio.hpp>

#include "src/msgs/WorkpieceInfo.pb.h"


using namespace cv;
using namespace std;
using namespace zbar;

using namespace llsf_msgs; 
using namespace protobuf_comm;

//g++ main.cpp /usr/local/include/ /usr/local/lib/ -lopencv_highgui.2.4.8 -lopencv_core.2.4.8

boost::asio::io_service io_service_; 
static boost::asio::deadline_timer *timer_ = NULL;




static bool quit = false; 
ProtobufStreamClient *client_ = NULL;  
uint32_t id=0;
std::string at_machine="C-CS1";
bool visible=false;

int newid;
static bool temp_bool=false;
//char *host = (char *)"localhost";
//unsigned short int port = 4444;

/* VideoSettings */
VideoCapture cap(0);
ImageScanner scanner;
Mat frame;
Mat grey;


//llsf_msgs::Team team_color=1;
void signal_handler(const boost::system::error_code& error, int signum)
{
  if (!error) {
    quit = true;

    if (timer_) {
      timer_->cancel();
    }
  }
}

void handle_connected()
{
  temp_bool=true;
}


void handle_disconnected(const boost::system::error_code &ec)                                                 
{               
	 
	temp_bool=false;                                                                                        
} 

void handle_message(uint16_t component_id, uint16_t msg_type,                                                 
               std::shared_ptr<google::protobuf::Message> msg)                                           
{                                                                                                        
} 
void
handle_recv_error(boost::asio::ip::udp::endpoint &endpoint, std::string msg)
{
  printf("Receive error from %s:%u: %s\n",
         endpoint.address().to_string().c_str(), endpoint.port(), msg.c_str());
}

void
handle_send_error(std::string msg)
{
  printf("Send error: %s\n", msg.c_str());
}

void detection()
{
	
}
void
handle_timer(const boost::system::error_code& error)
{
// cout << "temp_bool" << temp_bool<<  endl;
  if (! error ) {
    boost::posix_time::ptime now(boost::posix_time::microsec_clock::universal_time());
		
	visible=false;
        int product=0;
	for(int count=0; count < 5; ++count){

//	Mat frame;

        bool bSuccess = cap.read(frame); // read a new frame from video

         if (!bSuccess) //if not success, break loop
        {
            // cout << "Cannot read a frame from video stream" << endl;
         //    break;
        }
	else{
  //      Mat grey;
        cvtColor(frame,grey,CV_BGR2GRAY);

        int width = frame.cols;  
        int height = frame.rows;  
        uchar *raw = (uchar *)grey.data;  
        // wrap image data  
        Image image(width, height, "Y800", raw, width * height);  
        // scan the image for barcodes  
        int n = scanner.scan(image);  
        // extract results 
	//cout << "symbol_end " << image.symbol_end();
		std::string id_str;
        for(Image::SymbolIterator symbol = image.symbol_begin();  symbol != image.symbol_end();  ++symbol) {  
               // vector<Point> vp;  
		id_str=symbol->get_data();
	id_str.erase(id_str.end()-1);
	id_str.erase(id_str.begin());
	id_str.erase(id_str.begin());
	id_str.erase(id_str.begin());
	newid= std::stoi(id_str) ;
		visible=true;  
        }
	  if(newid!=0)
	{
		product=newid;
	}
	}
	}
  	if(temp_bool==true )
	{
/*
		std::cout << "id "  << product <<  std::endl;
		std::cout << "at_machine " << at_machine << std::endl;
		std::cout << "visible " << visible << std::endl;
*/
		llsf_msgs::Workpiece workpiece;
		workpiece.set_id(product);
		workpiece.set_at_machine(at_machine);
		workpiece.set_visible(visible);
		client_->send(workpiece);
	}



   timer_->expires_at(timer_->expires_at()+ boost::posix_time::milliseconds(500));
   timer_->async_wait(handle_timer);
  }

}


int main(int argc, char* argv[])
{
	client_ = new ProtobufStreamClient();
	//VideoCapture cap(1); // open the video camera no. 0


        //cvtColor(frame,grey,CV_BGR2GRAY);
/*
        int width = frame.cols;  
        int height = frame.rows;  
        uchar *raw = (uchar *)grey.data;  
*/
	if (!cap.isOpened())  // if not success, exit program
	{
		cout << "Cannot open the video cam" << endl;
		return -1;
	}


	//ImageScanner scanner;  
	scanner.set_config(ZBAR_UPCE, ZBAR_CFG_ENABLE, 1);  

	// double dWidth = cap.get(CV_CAP_PROP_FRAME_WIDTH); //get the width of frames of the video
	//double dHeight = cap.get(CV_CAP_PROP_FRAME_HEIGHT); //get the height of frames of the video

	//cout << "Frame size : " << dWidth << " x " << dHeight << endl;


	//bool free_host = argp.parse_hostport("R", &host, &port);
	boost::asio::io_service io_service;

	client_->signal_received().connect(handle_message);
	client_->signal_connected().connect(handle_connected);
	client_->signal_disconnected().connect(handle_disconnected);
  	client_->async_connect("192.168.43.18", 4444);
	
      
	//free(host);
	#if BOOST_ASIO_VERSION >= 100601
	// Construct a signal set registered for process termination.
	boost::asio::signal_set signals(io_service, SIGINT, SIGTERM);
	
	//
	//     // Start an asynchronous wait for one of the signals to occur.
	signals.async_wait(signal_handler);
	#endif

	timer_ = new boost::asio::deadline_timer(io_service);
	timer_->expires_from_now(boost::posix_time::milliseconds(500));
	timer_->async_wait(handle_timer);

	do {
    		io_service.run();
    		io_service.reset();
  	} while (! quit);
  
	delete timer_;
	delete client_;

	google::protobuf::ShutdownProtobufLibrary();
	return 0;
}
