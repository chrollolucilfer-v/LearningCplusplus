
#include<iostream>  // stdio for c
using namespace std; // new

int main(){

    // using for loop / while / do -while loops 
    // Questions for Patterns and loops

    // first square pattern

    // int n = 4;
    // for(int i =0; i < n; i++){
    //     for(int j = 1; j <=n; j++){
    //         cout << j;
    //     }
    //     cout << endl;
    // }

//    int n = 4;
//     for(int i =0; i < n; i++){
//         char ch = 'A';
//         for(int j = 1; j <=n; j++){
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }

 
//    int n = 4;
//     for(int i =0; i <= n; i++){
//         for(int j = 1; j <= i; j++){
//             cout << i;
//         }
//         cout << endl;
//     }


        //     char ch = 'A';
   
        //  for(int i = 1; i <= 4; i++){
        //     for(int j = 0; j < i; j++){
        //         cout << ch;
        //     }
        //     cout << endl;
        //     ch++;
        // }
         
   
         for(int i = 0; i <= 4; i++){
            for(int j = 1; j <= i; j++){
                cout<< j;
            }
            cout << endl;
        }
         


    return 0;
}