#ifndef _INTERFACE_H_
#define _INTERFACE_H_
#include "varclass.hpp"

vartype::DataType getCurrTypeForParse(const vartype &data);

std::string *getStrDataForParse(const vartype &data);

int *getIntDataForParse(const vartype &data);

double *getDoubleDataForParse(const vartype &data);

float *getFloatDataForParse(const vartype &data);


namespace vt {
    vartype parseInt(vartype strData);

    vartype parseFloat(vartype strData);

    vartype parseDouble(vartype strData);

    vartype toString(vartype strData);
}


#endif // _INTERFACE_H_