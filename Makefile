CC=g++
#ARCH=-arch x86_64


INCLUDE_FLAGS=-I/usr/local/include -I/usr/local/include/protobuf_comm
CFLAGS_PROTOBUF =$(shell $(PKGCONFIG) --cflags 'protobuf')
CFLAGS_PROTOBUF_COMM= $(shell $(PKGCONFIG) --cflags 'protobuf_comm')
CFLAGS=-c $(INCLUDE_FLAGS) -std=c++11 $(CLFAGS_PROTBUF) $(CFLAGS_PROTOBUF_COMM)
#LDFLAGS_PROTOBUF = $(shell $(PKGCONFIG) --libs 'protobuf')
#LDFLAGS_PROTOBUF_COMM = $(shell $(PKGCONFIG) --libs 'protobuf_comm')
LDFLAGS= -L/usr/local/lib -lopencv_core -lopencv_highgui -lopencv_imgproc -lzbar -lprotobuf -lpthread -lboost_system

SOURCES = main.cpp
OBJECTS=$(SOURCES:.cpp=.o)

EXECUTABLE=main

TEST=/home/protobuf_comm/src/protobuf_comm/.objs_sysinstall/
Os=$(TEST)client.o $(TEST)message_register.o# $(TEST)peer.o $(TEST)server.o 

all : $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE) : $(OBJECTS) Makefile
	$(CC) $(ARCH) $(LDFLAGS) $(OBJECTS) $(Os)  src/msgs/Team.pb.o src/msgs/WorkpieceInfo.pb.o -o $@



.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
