#!/bin/bash
g++ -Wall -std=c++17 -c assignment.cpp &&
g++ -o ../output/output assignment.o -L../../lib -lvt-variable && ../output/output
rm assignment.o
read -p "Program has ended ..."