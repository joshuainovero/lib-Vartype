# Build static library for linux

target = $(LIB)
objs := assignment.o ctors.o interface.o operatordivide.o $\
operatorminus.o operatormultiply.o operatorplus.o unaryassignment.o

CC := g++
CFLAGS := -Wall

SRCPATH := ../../src
HDR := ../../src/include/vartype.h
LDIR := ../../lib
LIB := libvt-variable.a

all: $(target)

$(LIB): $(objs)
	ar rsv $(LDIR)/$@ $^

assignment.o: $(SRCPATH)/assignment.cpp $(HDR)
	$(CC) $(CFLAGS) -c $<

ctors.o: $(SRCPATH)/ctors.cpp $(HDR)
	$(CC) $(CFLAGS) -c $<

interface.o: $(SRCPATH)/interface.cpp $(HDR)
	$(CC) $(CFLAGS) -c $<

operatordivide.o: $(SRCPATH)/operatordivide.cpp $(HDR)
	$(CC) $(CFLAGS) -c $<

operatorminus.o: $(SRCPATH)/operatorminus.cpp $(HDR)
	$(CC) $(CFLAGS) -c $<

operatormultiply.o: $(SRCPATH)/operatormultiply.cpp $(HDR)
	$(CC) $(CFLAGS) -c $<

operatorplus.o: $(SRCPATH)/operatorplus.cpp $(HDR)
	$(CC) $(CFLAGS) -c $<

unaryassignment.o: $(SRCPATH)/unaryassignment.cpp $(HDR)
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(objs)
