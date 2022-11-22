/* Write a Program to calculate and display factorial of a number using loop */
#include <iostream>
using namespace std;
class Number{
        unsigned int num;
        unsigned long int factorial(unsigned int num);
    public:
        Number(){num = 0;}
        Number(int x){num = x;}
        void display();
};
unsigned long int Number::factorial(unsigned int num){
    unsigned long int factorial = 1;
    for(unsigned int i = 2; i <= num; i++)
        factorial *= i;
    return factorial;
}
void Number::display(){
    cout<<num<<"! = "<<factorial(num)<<endl;
}
int main(){
    unsigned int num;
    cout<<"Enter the Number: ";
    cin>>num;
    Number N1(num);
    N1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\LAB> g++ -o E1P4.exe .\E1P4.cpp
PS D:\Junior\Study\Object-Oriented-Programming\LAB> .\E1P4.exe
Enter the Number: 5
5! = 120
*/