@echo off
set libmain=-L../../lib
set lib1=-lvt-variable

g++ -Wall -std=c++17 -c functions.cpp && ^
g++ -o ../output/output.exe functions.o %libmain% %lib1% && del functions.o
cd ../output && output.exe
echo program has ended
pause