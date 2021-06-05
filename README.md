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

These variables can be reassigned to a new data type after being initialized.
```cpp
var1 = "I changed to string";
var2 = 20;
var3 = 'A';
var4 = 3782.43;
var5 = (float)87.34;
```
