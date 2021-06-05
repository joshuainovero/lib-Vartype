@echo off
set libmain=-L../../lib
set lib1=-lvt-variable

g++ -Wall -std=c++17 -c operatorminus.cpp && ^
g++ -o ../output/output.exe operatorminus.o %libmain% %lib1% && del operatorminus.o
cd ../output && output.exe
echo program has ended
pause