#include <iostream>
#include "../../include/vartype/vartype.h"

int main(){
    vartype a = 20;
    std::cout << "a = " << a << std::endl;
    a += 2;
    std::cout << "a += 2 -> " << a << std::endl << std::endl;

    vartype b = "Joshua";
    std::cout << "b = " << b << std::endl;
    b += " Inovero";
    std::cout << "b += \"Inovero\" -> " << b << std::endl << std::endl;

    vartype c = 40;
    std::cout << "c = " << c << std::endl;
    c *= 3;
    std::cout << "c *= 3 -> " << c << std::endl << std::endl;

    vartype d = 17.348;
    std::cout << "d = " << d << std::endl;
    d -= 10;
    std::cout << "d -= 10 -> " << d << std::endl << std::endl;

    vartype e = 10;
    std::cout << "e = " << e << std::endl;
    e /= 2;
    std::cout << "e /= 2 -> " << e << std::endl;

    return 0;
}