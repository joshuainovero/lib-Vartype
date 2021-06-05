#ifndef _VARCLASS_H_
#define _VARCLASS_H_
#include <iostream>
#include <string>

class vartype {
    friend std::ostream &operator<<(std::ostream &os, const vartype &var);
    friend std::istream &operator>>(std::istream &in, vartype &rhs);

    friend vartype operator+(const vartype lhs, const int &rhs);
    friend vartype operator+(const int &lhs, const vartype rhs);
    friend vartype operator+(const vartype lhs, const double &rhs);
    friend vartype operator+(const double &lhs, const vartype rhs);
    friend vartype operator+(const vartype lhs, const char *rhs);
    friend vartype operator+(const char *lhs, const vartype rhs);
    friend vartype operator+(const vartype lhs, const char &rhs);
    friend vartype operator+(const char &lhs, const vartype rhs);
    friend vartype operator+(const vartype lhs, const std::string &rhs);
    friend vartype operator+(const std::string &lhs, const vartype rhs);

    friend vartype operator-(const vartype lhs, const int &rhs);
    friend vartype operator-(const vartype lhs, const double &rhs);
    friend vartype operator-(const int &lhs, const vartype rhs);
    friend vartype operator-(const double &lhs, const vartype rhs);

    friend vartype operator*(const vartype lhs, const int &rhs);
    friend vartype operator*(const vartype lhs, const double &rhs);
    friend vartype operator*(const int &lhs, const vartype rhs);
    friend vartype operator*(const double &lhs, const vartype rhs);

    friend vartype operator/(vartype lhs, const int &rhs);
    friend vartype operator/(const vartype lhs, const double &rhs);
    friend vartype operator/(const int &lhs, const vartype rhs);
    friend vartype operator/(const double &lhs, const vartype rhs);
    
private:
    enum class DataType {i,d,f,c,s,none} currType;
    int *int_t = nullptr;
    double *double_t = nullptr;
    float *float_t = nullptr;
    char *char_t = nullptr;
    std::string *str_t = nullptr;
    void freeTypes();
    friend vartype::DataType getCurrTypeForParse(const vartype &data);
    friend std::string *getStrDataForParse(const vartype &data);
    friend int *getIntDataForParse(const vartype &data);
    friend double *getDoubleDataForParse(const vartype &data);
    friend float *getFloatDataForParse(const vartype &data);
public:
    std::string type();
    size_t length();
    vartype(const vartype &source); // Deep copy
    vartype() {currType = DataType::none;};
    vartype(const int &valuetype);
    vartype(const double &valuetype);
    vartype(const float &valuetype);
    vartype(const char *valuetype);
    vartype(const char &valuetype);
    vartype(const std::string &valuetype);
    
    void operator=(const int &valuetype);
    void operator=(const double &valuetype);
    void operator=(const float &valuetype);
    void operator=(const char &valuetype);
    void operator=(const char *valuetype);
    void operator=(const std::string &valuetype);
    void operator=(const vartype &rhs);
    vartype operator+(const vartype &rhs);
    vartype operator-(const vartype &rhs);
    vartype operator*(const vartype &rhs);
    vartype operator/(const vartype &rhs);
    vartype &operator+=(const vartype &rhs);
    vartype &operator+=(const char &rhs);
    vartype &operator+=(const int &rhs);
    vartype &operator+=(const double &rhs);
    vartype &operator-=(const vartype &rhs);
    vartype &operator-=(const int &rhs);
    vartype &operator-=(const double &rhs);
    vartype &operator*=(const vartype &rhs);
    vartype &operator*=(const int &rhs);
    vartype &operator*=(const double &rhs);
    vartype &operator/=(const vartype &rhs);
    vartype &operator/=(const int &rhs);
    vartype &operator/=(const double &rhs);
    char operator[](const size_t index);
    vartype operator++(int);
    vartype &operator++();
    vartype operator--(int);
    vartype &operator--();
    
    friend vartype::DataType checkInputType(const std::string &initStr);
    ~vartype();
};

#endif // _VARCLASS_H_