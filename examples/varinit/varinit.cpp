#include <iostream>
#include "../../include/vartype/vartype.h"
#include <vector>
int main(){

    vartype var1 = 74;
    vartype var2 = 234.238;
    vartype var3 = (float)893.231;
    vartype var4 = 's';
    vartype var5 = "sjkuksee";

    std::cout << var1 << " = " << var1.type() << std::endl;
    std::cout << var2 << " = " << var2.type() << std::endl;
    std::cout << var3 << " = " << var3.type() << std::endl;
    std::cout << var4 << " = " << var4.type() << std::endl;
    std::cout << var5 << " = " << var5.type() << std::endl << std::endl;

    std::cout << "Multiple data type vectors" << std::endl;
    std::vector<vartype> vec {1,2,"some word",8.345,2,"hello","hi",237.23,50};
    for (auto c : vec) std::cout << c << ", ";




    std::cin.get();

    return 0;
}