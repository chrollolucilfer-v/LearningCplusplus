// hello world program

#include<iostream>  // stdio for c
using namespace std; // new



// this is same as c but the printff
int main(){

    // This is implicit conversion

    char grade = 'A';
    int value = grade;
    cout << value <<  endl;

    // Explicit
    double price = 100.0;
    int newValue = (int)price;
    cout << typeof(newValue) << endl;



    return 0;
}