#include <iostream>
#include "../../include/vartype/vartype.h"

int main(){
    vartype mystr = "Joshua";
    std::cout << "mystr = " << "\"" << mystr << "\"" << std::endl;
    std::cout << "cout mystr.length() -> " << mystr.length() << std::endl;
    std::cout << "cout mystr.type() -> " << mystr.type() << std::endl << std::endl;

    std::cout << "Looping through string: using indexing mystr[i]" << std::endl;
    for (size_t i = 0; i < mystr.length(); ++i)
        std::cout << mystr[i];
    std::cout << "\nLoop done" << std::endl << std::endl;

    vartype str1 = "362";
    vartype str2 = "237.342";
    vartype str3 = "12.43";
    std::cout << "str1 = " << "\"" << str1 << "\"" << std::endl;
    std::cout << "str2 = " << "\"" << str2 << "\"" << std::endl;
    std::cout << "str3 = " << "\"" << str3 << "\"" << std::endl;
    std::cout << "Convert string to int -> vt::parseInt(str1) -> " << vt::parseInt(str1) << " -> " << vt::parseInt(str1).type() << std::endl;
    std::cout << "Convert string to double -> vt::parseDouble(str2) -> " << vt::parseDouble(str2) << " -> " << vt::parseDouble(str2).type() << std::endl;
    std::cout << "Convert string to float -> vt::parseFloat(str3) -> " << vt::parseFloat(str3) << " -> " << vt::parseFloat(str3).type() << std::endl << std::endl << std::endl;

    vartype myint = 40;
    vartype mydouble = 746.112;
    vartype myfloat = (float)783.23;
    std::cout << "myint = " << myint << std::endl;
    std::cout << "mydouble = " << mydouble << std::endl;
    std::cout << "myfloat = " << myfloat << std::endl;
    std::cout << "Converting int to string -> vt::toString(myint) -> " << vt::toString(myint) << " -> " << vt::toString(myint).type() << std::endl;
    std::cout << "Converting double to string -> vt::toString(mydouble) -> " << vt::toString(mydouble) << " -> " << vt::toString(mydouble).type() << std::endl;
    std::cout << "Converting double to float -> vt::toString(myfloat) -> " << vt::toString(myfloat) << " -> " << vt::toString(myfloat).type() << std::endl;
    return 0;
}