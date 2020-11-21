CC=gcc
CXX=g++
RM=rm -f
CFLAGS=-g -O2
LDFLAGS=-g -O2

SRC_SRS1= main.cpp 
SRC_SRS = $(SRC_SRS1) 

SRCS=src/$(SRC_SRS) 
OBJS=$(subst .cpp,.o,$(SRCS))
all: TM

TM: $(OBJS)
	$(CXX) $(LDFLAGS) -o TM $(OBJS) 

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) *~ .dependtool

include .depend