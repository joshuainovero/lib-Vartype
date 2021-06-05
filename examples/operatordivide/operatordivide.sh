#!/bin/bash
g++ -Wall -std=c++17 -c operatordivide.cpp &&
g++ -o ../output/output operatordivide.o -L../../lib -lvt-variable && ../output/output
rm operatordivide.o
read -p "Program has ended ..."