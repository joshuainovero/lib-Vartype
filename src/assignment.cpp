#include "include/varclass.hpp"

void vartype::operator=(const int &valuetype){
    if (int_t == nullptr){
        freeTypes();
        int_t = new int (valuetype);
        currType = DataType::i;
    } else *int_t = valuetype;
    
}

void vartype::operator=(const double &valuetype){
    if (double_t == nullptr){
        freeTypes();
        double_t = new double (valuetype);
        currType = DataType::d;
    } else *double_t = valuetype;
    
}

void vartype::operator=(const float &valuetype){
    if (float_t == nullptr){
        freeTypes();
        float_t = new float (valuetype);
        currType = DataType::f;
    } else *float_t = valuetype;
}

void vartype::operator=(const char &valuetype){
    if (char_t == nullptr){
        freeTypes();
        char_t = new char ((int)valuetype);
        currType = DataType::c;
    } else *char_t = valuetype;
}

void vartype::operator=(const char *valuetype){
    if (str_t == nullptr){
        freeTypes();
        str_t = new std::string (valuetype);
        currType = DataType::s;
    } else *str_t = valuetype;
}

void vartype::operator=(const std::string &valuetype){
    if (str_t == nullptr){
        freeTypes();
        str_t = new std::string (valuetype);
        currType = DataType::s;
    } else *str_t = valuetype;
}

void vartype::operator=(const vartype &rhs){
    if (currType == rhs.currType) {
        switch (currType){
            case vartype::DataType::i: *int_t = *rhs.int_t; break;
            case vartype::DataType::d: *double_t = *rhs.double_t; break;
            case vartype::DataType::f: *float_t = *rhs.float_t; break;
            case vartype::DataType::c: *char_t = *rhs.char_t; break;
            case vartype::DataType::s: *str_t = *rhs.str_t; break;
            case vartype::DataType::none: break;
        }
    }
    else {
        freeTypes();
        switch (rhs.currType){
            case vartype::DataType::i: *this = *rhs.int_t; break;
            case vartype::DataType::d: *this = *rhs.double_t; break;
            case vartype::DataType::f: *this = *rhs.float_t; break;
            case vartype::DataType::c: *this = *rhs.char_t; break;
            case vartype::DataType::s: *this = *rhs.str_t; break;
            case vartype::DataType::none: break;
        }
    }
}
