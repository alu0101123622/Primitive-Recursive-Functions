CC=gcc
CXX=g++
RM=rm -f
CFLAGS=-g -O2
LDFLAGS=-g -O2

SRC_SRS1= main.cpp src/fpr.cpp src/addition-fpr.cpp src/product-fpr.cpp src/power-fpr.cpp
SRC_SRS = $(SRC_SRS1) 

SRCS=src/$(SRC_SRS) 
OBJS=$(subst .cpp,.o,$(SRCS))
all: FPR

FPR: $(OBJS)
	$(CXX) $(LDFLAGS) -o FPR $(OBJS) 

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) *~ .dependtool

include .depend