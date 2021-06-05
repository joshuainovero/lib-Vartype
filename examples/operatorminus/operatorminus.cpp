#include <iostream>
#include "../../include/vartype/vartype.h"

int main(){
    vartype num1 = 50;
    vartype num2 = 200;
    vartype num3 = 234.23;
    vartype num4 = 508.7787;
    vartype num5 = (float)738.23;
    vartype num6 = (float)362.982;

    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;
    std::cout << "num3 = " << num3 << std::endl;
    std::cout << "num4 = " << num4 << std::endl;
    std::cout << "num5 = " << num5 << std::endl;
    std::cout << "num6 = " << num6 << std::endl << std::endl;

    std::cout << "(num1)" << num1 << " - 10 = " << num1 - 10 << std::endl;
    std::cout << "(num3)" << num3 << " - 34 = " << num3 - 34 << std::endl;
    std::cout << "(num5)" << num5 << " - 123.43 = " << num5 - 123.43 << std::endl << std::endl;

    std::cout << "(num1)" << num1 << " - " << "(num3)" << num3 << " = " << num1 - num3 << std::endl;
    std::cout << "(num2)" << num2 << " - " << "(num4)" << num4 << " = " << num2 - num4 << std::endl;
    std::cout << "(num3)" << num3 << " - " << "(num5)" << num5 << " = " << num3 - num5 << std::endl;
    std::cout << "(num4)" << num4 << " - " << "(num6)" << num6 << " = " << num4 - num6 << std::endl << std::endl;

    int cInt = 74;
    double cDouble = 738.234;
    float cFloat = 213.65;

    std::cout << "(cInt)" << cInt << " - " << "(num1)" << num1 << " = " << cInt - num1 << std::endl;
    std::cout << "(cDouble)" << cDouble << " - " << "(num3)" << num3 << " = " << cDouble - num3 << std::endl;
    std::cout << "(cFloat)" << cFloat << " - " << "(num5)" << num5 << " = " << cFloat - num5 << std::endl << std::endl;

    return 0;
}