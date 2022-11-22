/* Write a program to resolve ambiguity in multipath inheritance using Virtual Base Class */
#include <iostream>
using namespace std;
class A{
    public:
        int a;
        void input(){ 
            cout<<"Enter the value of A: ";
            cin>>a;
        }
        void display(){
            cout<<"A = "<<a<<endl;
        }
};
class B: virtual public A{
    public:
        int b;
        void input(){
            cout<<"Enter the value of B: ";
            cin>>b;
        }
        void display(){
            cout<<"B = "<<b<<endl;
        }
};
class C: virtual public A{
        int c;
    public:
        void input(){
            cout<<"Enter the value of C: ";
            cin>>c;
        }
        void display(){
            cout<<"C = "<<c<<endl;
        }
};
class D:public B, public C{
        int d;
    public:
        void input(){
            A::input();
            B::input();
            C::input();
            cout<<"Enter the value of D: ";
            cin>>d;
        }
        void display(){
            A::display();
            B::display();
            C::display();
            cout<<"D = "<<d<<endl;
        }
};
int main(){
    D O1;
    O1.input();
    O1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o multipath_inheritance.exe .\multipath_inheritance.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\multipath_inheritance.exe
Enter the value of A: 12
Enter the value of B: 23
Enter the value of C: 34
Enter the value of D: 44
A = 12
B = 23
C = 34
D = 44
*/