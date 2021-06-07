@echo off
echo building libraries...

set lib1=libvt-variable.a
set srcpath=../../src/
set destination=../../lib/

echo Generating object files...
g++ -c %srcpath%assignment.cpp -c %srcpath%ctors.cpp -c %srcpath%interface.cpp
g++ -c %srcpath%operatordivide.cpp -c %srcpath%operatorminus.cpp -c %srcpath%operatormultiply.cpp
g++ -c %srcpath%operatorplus.cpp -c %srcpath%unaryassignment.cpp

IF %ERRORLEVEL% NEQ 0 ( 
    echo Error in generating object files... && pause
    exit 0
)

echo Linking...
ar rvs %destination%%lib1% assignment.o ctors.o operatordivide.o operatorminus.o ^
operatormultiply.o operatorplus.o unaryassignment.o interface.o

if exist %destination%%lib% (
    echo The build was succesfully executed...

) else (
    echo There was an error in building the static library...
)

del *.o
pause

