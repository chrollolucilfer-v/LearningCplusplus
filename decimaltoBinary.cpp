
#include<iostream>  // stdio for c
using namespace std; // new


int binary( int N){
    int pow =1;
    int ans = 0;
 while(N > 0){
    int rev = N % 2;
    N = N /2;
    ans += ( rev * pow);
    pow = pow * 10;
 }
 return ans;
}

int main(){

//to calculate sum of numbers from 1 to N;

cout << "Enter the value of N " << endl;
int N;
cin >> N;

cout << binary(N) << endl;





    return 0;
}