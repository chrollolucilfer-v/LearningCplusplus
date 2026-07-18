// types in variables

// data types are :-
// boolean
// charactter
// integer 
// float
// variables are used with the datatype it is generally used to store value



// strings collection or group of characters
// we can perfrom many operations on this


#include<iostream>
using namespace std;

int main(){

    cout << "Hello World";

    string s;
    cout << "Enter a String";
    getline(cin,s); // to take the inpurt stringof a string
    cout << "You have entered: ";
    cout<<s<<endl;

    s.push_back('Y'); // this will add a element at the end of the string
    cout<<"After Using Push Back function" <<s<<endl;

    s.pop_back();
    cout<<"After Using pop back function"<<s<<endl;

        // in c++ there are two ways to create a string
    //1. c- style strings
    // creating string object


    return 0;

}