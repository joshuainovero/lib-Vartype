#!/bin/bash
g++ -Wall -std=c++17 -c operatorplus.cpp &&
g++ -o ../output/output operatorplus.o -L../../lib -lvt-variable && ../output/output
rm operatorplus.o
read -p "Program has ended ..."