#include <iostream>
using namespace std;

int main() {
    char age = 'A';
    cout << sizeof(age) << endl;
    int value = age;
    cout << value << endl;
    // this was implicit type conversion or type casting

    // now for explicit type conversion or type casting
    // basically forcing the comiler to do the conversion
    double num = 100.99;
    int num1 = (int)num;
    cout << num << endl;
    cout << num1 << endl;
    return 0;
}

// we get a .exe file after compilation and we can run that file to get the output or result.


// we have this boliler code


// Variable container to store data
// a-z A-Z
// a = 5;
// bhaskar = 9;
// age = 21;
// grade = 'A'
// float = 3.14f;
// bool isSafe = true;
// true = 1 & false = 0;
// double price = 100.99;
// these are all primitive data types ie basic

// we also have to declare the data type of the variable before using it



// int age = 7;
// this type of programming is called dynamically typed
// int has 4 bytes of memory and can store values from -2,147,483,648 to 2,147,483,647
// char has 1 byte of memory and can store values from -128 to 127
// float has 4 bytes of memory and can store values from 1.2E-38 to 3.4E+38
// bool has 1 byte of memory and can store values true or false
// double has 8 bytes of memory and can store values from 2.3E-308 to 1.7E+308
// while writing float value we need to write f after the value liek 3.14f;
