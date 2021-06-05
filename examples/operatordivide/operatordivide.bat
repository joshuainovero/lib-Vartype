@echo off
set libmain=-L../../lib
set lib1=-lvt-variable

g++ -Wall -std=c++17 -c operatordivide.cpp && ^
g++ -o ../output/output.exe operatordivide.o %libmain% %lib1% && del operatordivide.o
cd ../output && output.exe
echo program has ended
pause