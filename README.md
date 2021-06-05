# lib-Vartype #
libvartype is a C++ open source library that can hold primitive and non-primitive data types in a user-defined variable.
This library will enable users to create objects or instances from the class "vartype" which can automatically assign an
appropriate value to the instance without specifying the data type. This library can also be used as an argument data type
if users dont want to use the auto keyword or templates. Below are the list of supported data types for the class
"vartype" :
- 32 bit signed integers
- 32 and 64 bit floating points
- Strings
- Single characters
<br>
___Note:___ A static library is required to be linked in your program:___libvt-variable.a___

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
functions can manipulate variables like converting existing data types to new data types explicitly.<br><br>
___vt::parseInt((your vartype variable));___<br>
The parseInt function converts its first argument to a string, parses that string, then returns a <i>vartype</i> integer.
```cpp
vartype myvar = "500";
myvar = vt::parseInt(myvar); // -> myvar gets reassigned to an integer 500
vartype strnum1 = "50";
vartype strnum2 = "60";
vartype sum = vt::parseInt(strnum1) + vt::parseInt(strnum2); // -> 110
```
<br>

___vt::parseFloat((your vartype variable));___<br>
The parseInt function converts its first argument to a string, parses that string, then returns a <i>vartype</i> float.
```cpp
vartype myvar = "367.432";
myvar = vt::parseFloat(myvar); // -> myvar gets reassigned to a float 367.432
myvar anothervar = "100";
anothervar = vt::parseFloat(anothervar); // -> value is 100 but is still a floating type number
```
<br>___vt::parseDouble((your vartype variable));___<br>
The parseInt function converts its first argument to a string, parses that string, then returns a <i>vartype</i> double.
```cpp
vartype var = "231.544";
var = vt::parseDouble(var); // -> var gets reassigned to a double 231.544
```
<br>___vt::toString((your vartype variable));___<br>
The toString function converts a numerical value to a vartype string.
```cpp
vartype num1 = 20;
vartype num2 = 80.478;
vartype num3 = (float)23.5;
vartype num4 = vt::toString(num1); // Converts to string
vartype num5 = vt::toString(num2); // Converts to string
vartype num6 = vt::toString(num3); // Converts to string
```
<br>A method called ___type()___</i> is also implemented in the class to identify the current data type of the variable.<br>
```cpp
vartype var1 = 30;
vartype var2 = "Hello World";
std::cout << var1.type() << std::endl; // -> will output to 'Int'
std::cout << var2.type() << std::endl; // -> will output to 'String'
std::cout << vt::toString(var1).type(); // -> will output to 'String'
```
<br>The ___length()___ method returns an unsigned integer type of characters present in the string.
```cpp
vartype mystring = "Hello";
std::cout << mystring.length() << std::endl; // -> returns
```
## Vectors and looping ##
The vartype strings behaves like associative arrays in which users can access the characters in a string by referencing to its index number inside
square brackets []. 
```cpp
vartype var = "Some String";
std::cout << var[2] << std::endl; // -> returns a character 'm'
vartype newvar = var[6]; // newvar will be a char data type with a value 't'
```
We can also declare a vector of vartypes using the class. This is very powerful as it enables you to create a dynamic list containing multiple data types.
The declaration of the vartype vector would be:
 ```cpp
 std::vector<vartype> vec {1,4,"hello",48.34,"okay",578,32,2.32,"wassup",43};
 ```
The elements of the vector can be easily accessed by also referencing its index number inside the square brackets [] or the __at()__ method.
```cpp
std::cout << vec.at(0) << std::endl; // -> returns a vartype integer 1
std::cout << vec.at(2) << std::endl; // -> returns a vartype string "hello";
vartype somevar = vec.at(7); // assigns 2.32 double to somevar
```
We can iterate through the vartype string by using a for loop.
```cpp
vartype str = "Joshua";
for (size_t i = 0; i < str.length(); ++i)
  std::cout << str[i] << std::endl; // Outputting every character from the string
```
It also goes the same for the vectors. A ranged-based for loop can be used in this case. Instead of using the 'auto' keyword, we can replace
it with the class 'vartype'.
```cpp
std::vector<vartype> vec {1,4,"hello",48.34,"okay",578,32,2.32,"wassup",43};
for (vartype elem : vec)
  std::cout << elem << std::endl; // outputs the elements of the multi-data type vector
```
