#include "../../include/vartype/util/varclass.hpp"

vartype &vartype::operator+=(const vartype &rhs){
    *this = *this + rhs;
    return *this;
}

vartype &vartype::operator+=(const char &rhs){
    *this = *this + rhs;
    return *this;
}

vartype &vartype::operator+=(const int &rhs){
    *this = *this + rhs;
    return *this;
}

vartype &vartype::operator+=(const double &rhs){
    *this = *this + rhs;
    return *this;
}


vartype &vartype::operator-=(const vartype &rhs){
    *this = *this - rhs;
    return *this;
}

vartype &vartype::operator-=(const int &rhs){
    *this = *this - rhs;
    return *this;
}

vartype &vartype::operator-=(const double &rhs){
    *this = *this - rhs;
    return *this;
}


vartype &vartype::operator*=(const vartype &rhs){
    *this = *this * rhs;
    return *this;
}

vartype &vartype::operator*=(const int &rhs){
    *this = *this * rhs;
    return *this;
}

vartype &vartype::operator*=(const double &rhs){
    *this = *this * rhs;
    return *this;
}


vartype &vartype::operator/=(const vartype &rhs){
    *this = *this / rhs;
    return *this;
}

vartype &vartype::operator/=(const int &rhs){
    *this = *this / rhs;
    return *this;
}

vartype &vartype::operator/=(const double &rhs){
    *this = *this / rhs;
    return *this;
}
