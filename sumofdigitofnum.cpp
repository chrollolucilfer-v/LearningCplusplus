
#include<iostream>  // stdio for c
using namespace std; // new


int sum( int N){
    int digitSum = 0;
    while(num > 0){
        int lastdig = num % 10;
        num = num /10;
        digitSum += lastdig;
    }
    
    return digitSum;
}

int main(){

//to calculate sum of numbers from 1 to N;

cout << "Enter the value of N " << endl;
int N;
cin >> N;

cout << sum(N) << endl;






    return 0;
}