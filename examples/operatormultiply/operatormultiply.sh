#!/bin/bash
g++ -Wall -std=c++17 -c operatormultiply.cpp &&
g++ -o ../output/output operatormultiply.o -L../../lib -lvt-variable && ../output/output
rm operatormultiply.o
read -p "Program has ended ..."