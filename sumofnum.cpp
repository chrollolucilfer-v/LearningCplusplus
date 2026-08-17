
#include<iostream>  // stdio for c
using namespace std; // new


int sum( int N){
    int s = 0;
    for(int i =1; i<=N; i++){
        s+= i;
    }
    return s;
}

int main(){

//to calculate sum of numbers from 1 to N;

cout << "Enter the value of N " << endl;
int N;
cin >> N;

cout << sum(N) << endl;





    return 0;
}