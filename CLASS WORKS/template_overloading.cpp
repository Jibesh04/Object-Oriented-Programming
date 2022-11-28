/* Write a template function to display character,
integer and float using one template function and
one ordinary function having single argument */
#include <iostream>
using namespace std;
template <class T>
void display(T a){
    cout<<"TEMPLATE DISPLAY: "<<a<<endl;
}
void display(int a){
    cout<<"INT DISPLAY: "<<a<<endl;
}
int main(){
    int a;
    float b;
    char c;
    cout<<"Enter an Integer: ";
    cin>>a;
    cout<<"Enter a Float: ";
    cin>>b;
    cout<<"Enter a Char: ";
    cin>>c;
    display(a);
    display(b);
    display(c);
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o .\template_overloading.exe .\template_overloading.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> .\template_overloading.exe
Enter an Integer: 12
Enter a Float: 1.2
Enter a Char: a
INT DISPLAY: 12
TEMPLATE DISPLAY: 1.2
TEMPLATE DISPLAY: a
*/