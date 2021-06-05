#include "../../include/vartype/util/varclass.hpp"
#include "../../include/vartype/util/interface.hpp"
#include <cctype>
#include <memory>

vartype::DataType getCurrTypeForParse(const vartype &data){
    return data.currType;
}

std::string *getStrDataForParse(const vartype &data) {
    return data.str_t;
}

int *getIntDataForParse(const vartype &data){
    return data.int_t;
}

double *getDoubleDataForParse(const vartype &data){
    return data.double_t;
}

float *getFloatDataForParse(const vartype &data){
    return data.float_t;
}



vartype vt::parseInt(vartype strData){
    return vartype(std::stoi(*getStrDataForParse(strData)));
}

vartype vt::parseFloat(vartype strData){
    return vartype(std::stof(*getStrDataForParse(strData)));
}

vartype vt::parseDouble(vartype strData){
    return vartype(std::stod(*getStrDataForParse(strData)));
}

vartype vt::toString(vartype strData){
    switch(static_cast<int>(getCurrTypeForParse(strData))){
        case 0:
            return vartype(std::to_string(*getIntDataForParse(strData))); break;
        case 1:
            return vartype(std::to_string(*getDoubleDataForParse(strData))); break;
        case 2:
            return vartype(std::to_string(*getFloatDataForParse(strData))); break;
        default: return strData;
    }
}


std::ostream &operator<<(std::ostream &os, const vartype &var) {
    switch (var.currType){
        case vartype::DataType::i:
            os << *var.int_t;
        break;
        case vartype::DataType::d:
            os << *var.double_t;
        break;
        case vartype::DataType::f:
            os << *var.float_t;
        break;
        case vartype::DataType::c:
            os << *var.char_t;
        break;
        case vartype::DataType::s:
            os << *var.str_t;
        break;
        case vartype::DataType::none:
            os << (int)&var;
        break;
    }
    return os;
}

vartype::DataType checkInputType(const std::string &initStr){
    for (size_t i = 0; i < initStr.length(); ++i){
        if (initStr[i] == '.') continue;
        if (std::isdigit(initStr[i]) == 0 || initStr[initStr.length() - 1] == '.')
            return vartype::DataType::s;
    }
    // decimal checking
    if (initStr.find('.') != std::string::npos) return vartype::DataType::d;
    else return vartype::DataType::i;
}

std::istream &operator>>(std::istream &in, vartype &rhs){
    std::string input;
    vartype tempObj;
    std::unique_ptr<int>int_tempPtr;
    std::unique_ptr<double>double_tempPtr;
    in >> input;
    switch(static_cast<int>(checkInputType(input))){
        case 0:
            int_tempPtr = std::make_unique<int>(std::stoi(input));
            tempObj = *int_tempPtr;
            break;
        case 1:
            double_tempPtr = std::make_unique<double>(std::stod(input));
            tempObj = *double_tempPtr;
            break;
        case 4:
            tempObj = input;
            break;
        default:break;
    }
    rhs = tempObj;
    return in;
}

std::string vartype::type(){
    std::string datatype;
    switch(currType){
        case vartype::DataType::i: datatype = "Int"; break;
        case vartype::DataType::d: datatype = "Double"; break;
        case vartype::DataType::f: datatype = "Float"; break;
        case vartype::DataType::c: datatype = "Char"; break;
        case vartype::DataType::s: datatype = "String"; break;
        case vartype::DataType::none: datatype = "Not set"; break;
    }
    return datatype;
}

char vartype::operator[](const size_t index){
    return str_t->at(index);
}

size_t vartype::length(){
    if (currType == DataType::s)
        return str_t->length();
    else return 0;
}
