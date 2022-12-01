/* Write a program to divide two numbers of different data types
and print the result using class template */
#include <iostream>
using namespace std;
template<class T1, class T2>
class Number{
        T1 a;
        T2 b;
    public:
        void input(){
            cout<<"Enter a: ";
            cin>>a;
            cout<<"Enter b: ";
            cin>>b;
        }
        void display(){
            cout<<a<<" / "<<b<<" results: "<<(a/b)<<endl;
        }
};
int main(){
    Number<int, float> n1;
    Number<float, int> n2;
    cout<<"Integer a divided by float b...\n";
    n1.input();
    n1.display();
    cout<<"Float a divided by integer b...\n";
    n2.input();
    n2.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o class_template_2.exe ./class_template_2.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> ./class_template_2.exe
Integer a divided by float b...
Enter a: 12
Enter b: 2.5
12 / 2.5 results: 4.8
Float a divided by integer b...
Enter a: 15.8
Enter b: 3
15.8 / 3 results: 5.26667
*/