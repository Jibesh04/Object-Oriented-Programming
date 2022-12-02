/* Write a program to illustrate Object Slicing */
#include <iostream>
using namespace std;
class A{
    public:
        int p;
        A(){p = 30;}
};
class B:public A{
    public:
        int q;
        B(){p = 50; q = 20;}
};
int main(){
    A a1;
    B b1;
    cout<<a1.p<<endl;
    cout<<b1.p<<endl;
    cout<<"Slicing class A object with B..."<<endl;
    a1 = b1;
    cout<<a1.p<<endl;
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o .\object_slicing.exe .\object_slicing.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> .\object_slicing.exe
30
50
Slicing class A object with B...
50
*/