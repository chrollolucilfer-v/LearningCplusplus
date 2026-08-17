#include<iostream>
using namespace std;
int main(){

    // code to print a triangle pattern
    int n = 5;
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){ // main part is starting from 1 and endling i

            cout << num << " "; // printing the number
        }
        cout << endl;
            num += 1; // incrementing the number

    }



return 0;

}