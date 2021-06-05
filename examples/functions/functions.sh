#!/bin/bash
g++ -Wall -std=c++17 -c functions.cpp &&
g++ -o ../output/output functions.o -L../../lib -lvt-variable && ../output/output
rm functions.o
read -p "Program has ended ..."