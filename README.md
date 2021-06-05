# lib-Vartype #
libvartype is a C++ open source library that can hold primitive and non-primitive data types in a user-defined variable.
This library will enable users to create objects or instances from the class "vartype" which can automatically assign an
appropriate value to the instance without specifying the data type. Below are the list of supported data types for the class
"vartype" :
- 32 bit signed integers
- 32 and 64 bit floating points
- Strings
- Single characters

# Features #
- Type erasure which means that any value may be held in a single variable
- Operators are fully functional
- It converts between any type of data
- No data leakage in the process of convertion
- Can be assigned to a new data type after being initialized
- Multiply data types in a vector are well supported

# Usage #
## Declaring a variable ##
Declare your variables by simply defining the class "vartype" along with your desired variable name.
```cpp
vartype var1 = 200;
vartype var2 = 423.65;
vartype var3 = (float)673.23;
vartype var4 = 'J';
vartype var5 = "Some String"
```

These variables can be reassigned to a new data type after being initialized. Bear in mind that the memory address of
the previous data type are freed and will allocate a new memory for the existing data type.
```cpp
var1 = "I changed to string";
var2 = 20;
var3 = 'A';
var4 = 3782.43;
var5 = (float)87.34;
```

## Operators ##
Operators are well implemented in all known basic C++ types. It may throw an error in illogical situations like adding
a vartype string to an integer vartype.
```cpp
vartype num1 = 20;
vartype num2 = 37;
std::cout << num1 + 100 << std::endl; // -> 120
std::cout << num1 + num2 << std::endl; // -> 57
vartype num3 = num2 - num1; // -> 3
vartype firstname = "Joshua", lastname = " Inovero";
vartype fullname = firstname + lastname; // -> "Joshua Inovero"
// More examples at the 'example' directory in this reposistory
```

## Automatic promotions in numerical data types ##
To minimize the possible loss of data, automatic convertions of a nummerical data type to another numerical data type
are carried out by the class.
```cpp
vartype num1 = 100; // Declared as an integer;
var += 50.434; // Converts the data type to a double
vartype = 5;
vartype /= (float)2; // -> 2.5 -> Float
```

## Functions and methods ##
The external functions for the manipulations of the instances from the class are declared in the namespace 'vt'. These
functions can manipulate variables like converting existing data types to new data types explicitly.
#### vt::parseInt(vartype strData); ####
  The parseInt function converts its first argument to a string, parses that string, then returns an integer
