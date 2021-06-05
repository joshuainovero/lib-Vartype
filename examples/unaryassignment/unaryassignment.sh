#!/bin/bash
g++ -Wall -std=c++17 -c unaryassignment.cpp &&
g++ -o ../output/output unaryassignment.o -L../../lib -lvt-variable && ../output/output
rm unaryassignment.o
read -p "Program has ended ..."