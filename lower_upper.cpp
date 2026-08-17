#include<iostream>
using namespace std;
int main(){
    
char ch;
cout << "Enter a character: ";
cin >> ch;
if( ch >='a' && ch <= 'z'){
    cout << "You entered a lowercase letter" << endl;
}
else if( ch >= 'A' && ch <= 'Z'){
    cout << "You entered an uppercase letter" << endl;
}
else{
    cout << "You entered a special character or number" << endl;
}
return 0;

}