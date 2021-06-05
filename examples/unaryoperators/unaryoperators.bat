@echo off
set libmain=-L../../lib
set lib1=-lvt-variable

g++ -Wall -std=c++17 -c unaryoperators.cpp && ^
g++ -o ../output/output.exe unaryoperators.o %libmain% %lib1% && del unaryoperators.o
cd ../output && output.exe
echo program has ended
pause