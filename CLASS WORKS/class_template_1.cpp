/* Write a program to calculate square of a number using class template */
#include <iostream>
using namespace std;
template <class T>
class Number{
        T a;
        T sq(T a){
            return a * a;
        }
    public:
        void input(){
            cout<<"Enter the number: ";
            cin>>a;
        }
        void display(){
            cout<<"Square of "<<a<<" is: "<<sq(a)<<endl;
        }
};
int main(){
    Number<int> n1;
    Number<float> n2;
    cout<<"For Integer...\n";
    n1.input();
    n1.display();
    cout<<"For Float...\n";
    n2.input();
    n2.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o class_template_1.exe .\class_template_1.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> .\class_template_1.exe
For Integer...
Enter the number: 12
Square of 12 is: 144
For Float...
Enter the number: 1.2
Square of 1.2 is: 1.44
*/