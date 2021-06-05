#!/bin/bash
set -e
echo building libraries...

lib1=libvt-variable.a
srcpath=../lib_vartype
destination=../../lib

echo Generating object files...
g++ -c $srcpath/assignment.cpp -c $srcpath/ctors.cpp -c $srcpath/interface.cpp
g++ -c $srcpath/operatordivide.cpp -c $srcpath/operatorminus.cpp -c $srcpath/operatormultiply.cpp
g++ -c $srcpath/operatorplus.cpp -c $srcpath/unaryassignment.cpp

echo Linking...
ar rvs $destination/$lib1 assignment.o ctors.o operatordivide.o operatorminus.o \
operatormultiply.o operatorplus.o unaryassignment.o interface.o


rm *.o

read -p "The build was succesfully executed..."

