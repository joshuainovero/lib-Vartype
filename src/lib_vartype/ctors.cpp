#include "../../include/vartype/util/varclass.hpp"
#include <cstring>

void vartype::freeTypes() {
    delete int_t; int_t = nullptr;
    delete double_t; double_t = nullptr;
    delete float_t; float_t = nullptr;
    delete char_t; char_t = nullptr;
    delete str_t; str_t = nullptr;
}

vartype::vartype(const int &valuetype)
    :int_t(nullptr){
        int_t = new int (valuetype);
        currType = DataType::i;
    }

vartype::vartype(const double &valuetype)
    :double_t(nullptr){
        double_t = new double (valuetype);
        currType = DataType::d;
    }

vartype::vartype(const float &valuetype)
    :float_t(nullptr){
        float_t = new float (valuetype);
        currType = DataType::f;
    }

vartype::vartype(const char &valuetype)
    :char_t(nullptr){
        char_t = new char((int)valuetype);
        currType = DataType::c;
    }

vartype::vartype(const char *valuetype)
    :str_t(nullptr){
        str_t = new std::string(valuetype);
        currType = DataType::s;
    }


vartype::vartype(const std::string &valuetype)
    :str_t(nullptr){
        str_t = new std::string(valuetype);
        currType = DataType::s;
    }

vartype::vartype(const vartype &source){
    if (source.int_t != nullptr) 
        int_t = new int(*source.int_t);
    else int_t = nullptr;
    if (source.double_t != nullptr)
        double_t = new double(*source.double_t);
    else double_t = nullptr;
    if (source.float_t != nullptr)
        float_t = new float(*source.float_t);
    else float_t = nullptr;
    if (source.char_t != nullptr)
        char_t = new char(*source.char_t);
    else char_t = nullptr;
    if (source.str_t != nullptr)
        str_t = new std::string(*source.str_t);
    else str_t = nullptr;
    currType = source.currType;
}

vartype::~vartype(){freeTypes();}

