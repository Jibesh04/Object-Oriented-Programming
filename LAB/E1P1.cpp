/* Write a program to take two integers inputs and display their sum */
#include <iostream>
using namespace std;
class Number{
        int a, b;
        int sum(int, int);
    public:
        Number(){a = b = 0;}
        Number(int x, int y){a = x; b = y;}
        ~Number(){}
        void display();
};
int Number::sum(int a, int b){
    return (a + b);
}
void Number::display(){
    cout<<"A = "<<a<<"\nB = "<<b<<"\nA + B = "<<sum(a, b)<<endl;
}
int main(){
    int a, b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    Number N1(a, b);
    N1.display();
    return 0;    
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\LAB> g++ -o E1P1.exe .\E1P1.cpp
PS D:\Junior\Study\Object-Oriented-Programming\LAB> .\E1P1.exe
Enter a and b : 12 -12
A = 12
B = -12
A + B = 0
*/