/* Write a Program to display sum of digits a 3-digit number */
#include <iostream>
using namespace std;
class Number{
        int num;
        int digitSum(int);
    public:
        Number(){num = 0;}
        Number(int n){num = n;}
        ~Number(){}
        void display();
};
int Number::digitSum(int num){
    int temp = num, sum = 0;
    while(temp){
        sum += temp%10;
        temp /= 10;
    }
    return sum;
}
void Number::display(){
    cout<<"N = "<<num<<" has a digit sum of "<<digitSum(num)<<endl;
}
int main(){
    int num;
    cout<<"Enter a 3 digit number: ";
    cin>>num;
    Number N1(num);
    N1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\LAB> g++ -o E1P7.exe .\E1P7.cpp
PS D:\Junior\Study\Object-Oriented-Programming\LAB> .\E1P7.exe
Enter a 3 digit number: 127
N = 127 has a digit sum of 10
*/