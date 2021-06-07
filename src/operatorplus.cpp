#include "include/varclass.hpp"

vartype operator+(const vartype lhs, const int &rhs) {
    vartype temp;
    if (lhs.currType == vartype::DataType::i)
        temp = *lhs.int_t + rhs;
    else if (lhs.currType == vartype::DataType::d)
        temp = *lhs.double_t + rhs;
    else if (lhs.currType == vartype::DataType::f)
        temp = *lhs.float_t + rhs;
    return temp;
}

vartype operator+(const vartype lhs, const double &rhs){
    vartype temp;
    if (lhs.currType == vartype::DataType::i) 
        temp = *lhs.int_t + rhs;
    else if (lhs.currType == vartype::DataType::d)
        temp = *lhs.double_t + rhs;
    else if (lhs.currType == vartype::DataType::f)
        temp = *lhs.float_t + rhs;
    return temp;   
}

vartype operator+(const int &lhs, const vartype rhs){
    return rhs + lhs;
}

vartype operator+(const double &lhs, const vartype rhs){
    return rhs + lhs;
}


vartype operator+(const vartype lhs, const char *rhs){
    return vartype(*lhs.str_t + rhs);
}

vartype operator+(const char *lhs, const vartype rhs){
    return vartype(lhs + *rhs.str_t);
}

vartype operator+(const vartype lhs, const std::string &rhs){
    return vartype(*lhs.str_t + rhs);
}

vartype operator+(const std::string &lhs, const vartype rhs){
    return vartype(lhs + *rhs.str_t);
}

vartype operator+(const vartype lhs, const char &rhs){
    return vartype(*lhs.str_t + rhs);
}

vartype operator+(const char &lhs, const vartype rhs){
    return vartype(lhs + *rhs.str_t);
}


vartype vartype::operator+(const vartype &rhs){
    if (rhs.currType == DataType::i){
        return *this + *rhs.int_t;
    }
    else if (rhs.currType == DataType::d){
        return *this + *rhs.double_t;
    }
    else if (rhs.currType == DataType::f){
        return *this + *rhs.float_t;
    }
    else if (rhs.currType == DataType::c){
        return *this + *rhs.char_t;
    }
    else if (rhs.currType == DataType::s){
        return *this + *rhs.str_t;
    }
    else return *this;
}

vartype &vartype::operator++(){
    switch(currType){
        case DataType::i: ++(*int_t); break;
        case DataType::d: ++(*double_t); break;
        case DataType::f: ++(*float_t); break;
        default: break;
     }
     return *this;
}

vartype vartype::operator++(int){
    vartype tempObj = *this;
    operator++();
    return tempObj;
}
