/* Write a Program to check if a number is prime or not */
#include <iostream>
#include <cmath>
using namespace std;
class Number{
        int n;
        int isPrime(int);
    public:
        Number(){n = 0;}
        Number(int num){n = num;}
        void display();
};
int Number::isPrime(int n){
    if(n <= 1)
        return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)
            return 0;
    }
    return 1;
}
void Number::display(){
    cout<<"N = "<<n;
    if(isPrime(n))
        cout<<" is a Prime Number"<<endl;
    else
        cout<<" is not a Prime Number"<<endl;
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    Number N1(num);
    N1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\LAB> g++ -o .\E1P3.exe .\E1P3.cpp
PS D:\Junior\Study\Object-Oriented-Programming\LAB> .\E1P3.exe
Enter the number: 12
N = 12 is not a Prime Number
*/