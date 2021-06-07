#include "include/varclass.hpp"

vartype operator/(vartype lhs, const int &rhs){
    vartype temp;
    if (lhs.currType == vartype::DataType::i) {
        if ((*lhs.int_t % rhs) == 0)
            temp = *lhs.int_t / rhs;
        else temp = static_cast<double>(*lhs.int_t) / rhs;
    }
    else if (lhs.currType == vartype::DataType::d)
        temp = *lhs.double_t / rhs;
    else if (lhs.currType == vartype::DataType::f)
        temp = *lhs.float_t / rhs;
    return temp;
}

vartype operator/(const vartype lhs, const double &rhs){
    vartype temp;
    if (lhs.currType == vartype::DataType::i)
        temp = *lhs.int_t / rhs;
    else if (lhs.currType == vartype::DataType::d)
        temp = *lhs.double_t / rhs;
    else if (lhs.currType == vartype::DataType::f)
        temp = *lhs.float_t / rhs;
    return temp;
}

vartype operator/(const int &lhs, const vartype rhs){
    vartype temp;
    if (rhs.currType == vartype::DataType::i){
        if ((lhs % *rhs.int_t) == 0)
            temp = lhs / *rhs.int_t;
        else temp = lhs / static_cast<double>(*rhs.int_t);
    }
    else if (rhs.currType == vartype::DataType::d)
        temp = lhs / *rhs.double_t;
    else if (rhs.currType == vartype::DataType::f)
        temp = lhs / *rhs.float_t;
    return temp;
}

vartype operator/(const double &lhs, const vartype rhs){
    vartype temp;
    if (rhs.currType == vartype::DataType::i)
        temp = lhs / *rhs.int_t;
    else if (rhs.currType == vartype::DataType::d)
        temp = lhs / *rhs.double_t;
    else if (rhs.currType == vartype::DataType::f)
        temp = lhs / *rhs.float_t;
    return temp;
}

vartype vartype::operator/(const vartype &rhs){
    if (rhs.currType == DataType::i)
        return *this / *rhs.int_t;
    else if (rhs.currType == DataType::d)
        return *this / *rhs.double_t;
    else if (rhs.currType == DataType::f)
        return *this / *rhs.float_t;
    else return *this;
}
