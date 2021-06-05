@echo off
set libmain=-L../../lib
set lib1=-lvt-variable

g++ -Wall -std=c++17 -c operatorplus.cpp && ^
g++ -o ../output/output.exe operatorplus.o %libmain% %lib1% && del operatorplus.o
cd ../output && output.exe
echo program has ended
pause