# Build static library for linux

CC=g++
CFLAGS=-c -Wall

SRCPATH=../src/lib_vartype
LDIR=../lib
LIB=libvt-variable.a
OBJ=assignment.o ctors.o interface.o operatordivide.o operatorminus.o operatormultiply.o operatorplus.o unaryassignment.o

build: compile clean

compile: $(OBJ)
	ar rsv $(LDIR)/$(LIB) $(OBJ) && ranlib $(LDIR)/$(LIB)

assignment.o: $(SRCPATH)/assignment.cpp
	$(CC) $(CFLAGS) $(SRCPATH)/assignment.cpp

ctors.o: $(SRCPATH)/ctors.cpp
	$(CC) $(CFLAGS) $(SRCPATH)/ctors.cpp

interface.o: $(SRCPATH)/interface.cpp
	$(CC) $(CFLAGS) $(SRCPATH)/interface.cpp

operatordivide.o: $(SRCPATH)/operatordivide.cpp
	$(CC) $(CFLAGS) $(SRCPATH)/operatordivide.cpp

operatorminus.o: $(SRCPATH)/operatorminus.cpp
	$(CC) $(CFLAGS) $(SRCPATH)/operatorminus.cpp

operatormultiply.o: $(SRCPATH)/operatormultiply.cpp
	$(CC) $(CFLAGS) $(SRCPATH)/operatormultiply.cpp

operatorplus.o: $(SRCPATH)/operatorplus.cpp
	$(CC) $(CFLAGS) $(SRCPATH)/operatorplus.cpp

unaryassignment.o: $(SRCPATH)/unaryassignment.cpp
	$(CC) $(CFLAGS) $(SRCPATH)/unaryassignment.cpp

clean:
	rm *.o
