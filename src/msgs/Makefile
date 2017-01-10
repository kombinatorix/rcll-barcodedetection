CC=g++
#ARCH=-arch x86_64


INCLUDE_FLAGS=-I/usr/local/include -I/usr/local/include/protobuf_comm
CFLAGS_PROTOBUF =$(shell $(PKGCONFIG) --cflags 'protobuf')
CFLAGS_PROTOBUF_COMM= $(shell $(PKGCONFIG) --cflags 'protobuf_comm')
CFLAGS=-c -g -Wall $(INCLUDE_FLAGS) -std=c++11 $(CLFAGS_PROTBUF) $(CFLAGS_PROTOBUF_COMM)
#LDFLAGS_PROTOBUF = $(shell $(PKGCONFIG) --libs 'protobuf')
#LDFLAGS_PROTOBUF_COMM = $(shell $(PKGCONFIG) --libs 'protobuf_comm')
LDFLAGS= -L/usr/local/lib -lopencv_core -lopencv_highgui -lopencv_imgproc -lzbar -lprotobuf -lpthread -lboost_system

SOURCES = Team.pb.cc WorkpieceInfo.pb.cc
OBJECTS=$(SOURCES:.cpp=.o)


TEST=/home/protobuf_comm/src/protobuf_comm/.objs_sysinstall/
Os=$(TEST)client.o $(TEST)message_register.o# $(TEST)peer.o $(TEST)server.o 

all : $(SOURCES) 

#$(EXECUTABLE) : $(OBJECTS) Makefile
#	$(CC) $(ARCH) $(LDFLAGS) $(OBJECTS) $(Os)  src/msgs/.objs_fawkes/Team.pb.o src/msgs/.objs_fawkes/WorkpieceInfo.pb.o -o $@



.cc.o:
	$(CC) $(CFLAGS) $< -o $@
