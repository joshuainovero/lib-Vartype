@echo off
set libmain=-L../../lib
set lib1=-lvt-variable

g++ -Wall -std=c++17 -c varinit.cpp && ^
g++ -o ../output/output.exe varinit.o %libmain% %lib1% && del varinit.o
cd ../output && output.exe
echo program has ended
pause