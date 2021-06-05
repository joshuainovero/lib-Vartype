@echo off
set libmain=-L../../lib
set lib1=-lvt-variable

g++ -Wall -std=c++17 -c assignment.cpp && ^
g++ -o ../output/output.exe assignment.o %libmain% %lib1% && del assignment.o
cd ../output && output.exe
echo program has ended
pause