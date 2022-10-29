/* Write a program to implement the following inheritance using constructors
        A  -> a1, a2        B -> b1, b2
            |                   |
            |___________________|
                       |
                       v
                       C -> c1
*/
#include <iostream>
using namespace std;
class A{
    public:
        int a1, a2;
        A(int p1, int p2){
            a1 = p1;
            a2 = p2;
        }
        void display(){
            cout<<a1<<" "<<a2<<endl;
        }
};
class B{
    public:
        float b1, b2;
        B(float q1, float q2){
            b1 = q1;
            b2 = q2;
        }
        void display(){
            cout<<b1<<" "<<b2<<endl;
        }
};
class C:public A, public B{
        int c1;
    public:
        C(int p1, int p2, float q1, float q2, int r1):A(p1, p2), B(q1, q2){
            c1 = r1;
        }
        void display(){
            A::display();
            B::display();
            cout<<c1<<endl;
        }
};
int main(){
    C O1(5, 6, 5.5, 6.5, 7);
    O1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o constructors_in_derived_class.exe .\constructors_in_derived_class.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\constructors_in_derived_class.exe
5 6
5.5 6.5
7
*/