
#include<iostream>  // stdio for c
using namespace std; // new


int decimal( int N){
    int pow =1;
    int ans = 0;
 while(N > 0){
    int rem = N % 2;
    N = N /10;
    ans += ( rem * pow);
    pow = pow * 2;
 }
 return ans;
}

int main(){

//to calculate sum of numbers from 1 to N;

cout << "Enter the value of N " << endl;
int N;
cin >> N;

cout << decimal(N) << endl;





    return 0;
}