/* Write a program to check if a number is a pallindrome or not */
#include <iostream>
using namespace std;
class Number{
        int num;
        int isPallindrome(int);
    public:
        Number(){num = 0;}
        Number(int n){num = n;}
        ~Number(){}
        void display();
};
int Number::isPallindrome(int n){
    int temp = n, rev = 0;
    while(temp){
        rev = 10*rev + (temp%10);
        temp /= 10;
    }
    return (n == rev);
}
void Number::display(){
    cout<<"N = "<<num;
    if(isPallindrome(num))
        cout<<" is a Pallindrome"<<endl;
    else
        cout<<" is not a Pallindrome"<<endl;
}
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    Number N1(n);
    N1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\LAB> g++ -o E1P6.exe .\E1P6.cpp
PS D:\Junior\Study\Object-Oriented-Programming\LAB> .\E1P6.exe        Enter the Number: 121
N = 121 is a Pallindrome
*/