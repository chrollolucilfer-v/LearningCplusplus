
#include<iostream>  // stdio for c
using namespace std; // new

int main(){


    // reverse triangle and loop

    int n = 4;
    int num =1;
    for(int i = 0; i < n; i++){
       for(int j = 0; j < i; j++){
            cout << num ;
            num++;
            
        }
        cout << endl;
    }






    return 0;
}