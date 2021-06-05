#include <iostream>
#include "../../include/vartype/vartype.h"

int main(){
    vartype a = 25;
    vartype b = 40;
    std::cout << "a = " << a << std::endl;
    std::cout << "cout a++ -> " << a++ << std::endl;
    std::cout << "cout a -> " <<  a << std::endl << std::endl;
    
    std::cout << "a = " << a << std::endl;
    std::cout << "cout ++a -> " << ++a << std::endl;
    std::cout << "cout a -> " << a << std::endl << std::endl << std::endl;


    std::cout << "b = " << b << std::endl;
    std::cout << "cout b++ -> " << b++ << std::endl;
    std::cout << "cout b -> " << b << std::endl << std::endl;

    std::cout << "b = " << b << std::endl;
    std::cout << "cout ++b -> " << ++b << std::endl;
    std::cout << "cout b -> " << b << std::endl << std::endl << std::endl;

    std::cout << "a = " << a << std::endl;
    vartype c = a++;
    std::cout << "c = a++ -> cout c -> " << c << std::endl;
    std::cout << "cout a -> " << a << std::endl << std::endl;

    std::cout << "c = " << c << std::endl;
    vartype d = ++c;
    std::cout << "d = ++c -> cout c -> " << c << std::endl;
    std::cout <<     "cout c -> " << a << std::endl << std::endl << std::endl;

    std::cout << "d = " << d << std::endl;
    vartype e = d--;
    std::cout << "e = d-- -> cout e -> " << e << std::endl;
    std::cout << "cout d -> " << d << std::endl << std::endl;
    
    std::cout << "e = " << e << std::endl;
    vartype f = --e;
    std::cout << "f = --e -> cout f -> " << f << std::endl;
    std::cout << "cout e -> " << e << std::endl;


    return 0;
}