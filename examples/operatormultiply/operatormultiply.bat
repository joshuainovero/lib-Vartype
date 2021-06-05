@echo off
set libmain=-L../../lib
set lib1=-lvt-variable

g++ -Wall -std=c++17 -c operatormultiply.cpp && ^
g++ -o ../output/output.exe operatormultiply.o %libmain% %lib1% && del operatormultiply.o
cd ../output && output.exe
echo program has ended
pause