//learning functions


#include<iostream>  // stdio for c
using namespace std; // new



// sum of two numbers
double sum( double a, double b){
    double s = a +b;
    return s;

}

int min(int a, int b){
    if(a<b){
        return a;
    }
   
    else{
        return b;
    }
}

int main(){

    cout << "Sum of a & b is " << sum(10.89, 67.97) << endl;





    return 0;
}