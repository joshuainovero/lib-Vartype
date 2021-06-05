#include <iostream>
#include "../../include/vartype/vartype.h"

int main(){
    vartype var1;
    vartype var2;
    var1 = 40;
    var2 = "Some string";
    std::cout << var1 << " = " << var1.type() << std::endl;
    std::cout << "'" << var2 << "'" << " = " << var2.type() << std::endl << std::endl;

    var1 = 34.54;
    var2 = 'a';

    std::cout << var1 << " = " << var1.type() << std::endl;
    std::cout << "'" << var2 << "'" << " = " << var2.type() << std::endl << std::endl;

    var1 = var1 + 50;
    vartype anothervar = "Joshua";
    var2 = anothervar + " Inovero";

    std::cout << var1 << " = " << var1.type() << std::endl;
    std::cout << "'" << var2 << "'" << " = " << var2.type() << std::endl;
    
    return 0;
}