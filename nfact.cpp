
#include<iostream>  // stdio for c
using namespace std; // new


int fact( int N){
    if(N ==0 || N==1){
        return 1;
    }
    else{
        return N * fact(N-1);
    }
}

int main(){

//to calculate sum of numbers from 1 to N;

cout << "Enter the value of N " << endl;
int N;
cin >> N;

cout << fact(N) << endl;





    return 0;
}