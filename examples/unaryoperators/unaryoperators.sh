#!/bin/bash
g++ -Wall -std=c++17 -c unaryoperators.cpp &&
g++ -o ../output/output unaryoperators.o -L../../lib -lvt-variable && ../output/output
rm unaryoperators.o
read -p "Program has ended ..."