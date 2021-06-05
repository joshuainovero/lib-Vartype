#!/bin/bash
g++ -Wall -std=c++17 -c operatorminus.cpp &&
g++ -o ../output/output operatorminus.o -L../../lib -lvt-variable && ../output/output
rm operatorminus.o
read -p "Program has ended ..."