@echo off
set libmain=-L../../lib
set lib1=-lvt-variable

g++ -Wall -std=c++17 -c unaryassignment.cpp && ^
g++ -o ../output/output.exe unaryassignment.o %libmain% %lib1% && del unaryassignment.o
cd ../output && output.exe
echo program has ended
pause