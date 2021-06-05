#!/bin/bash
g++ -Wall -std=c++17 -c varinit.cpp &&
g++ -o ../output/output varinit.o -L../../lib -lvt-variable && ../output/output
rm varinit.o
read -p "Program has ended ..."