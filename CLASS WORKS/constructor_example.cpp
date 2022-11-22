#include<iostream>
using namespace std;
class A{
        int a, b;
    public:
        A(){
            a = 10;
            b = 20;
        }
        void display(){
            cout<<a<<b<<endl;
        }
};
int main(){
    A O1; // Will automatically call the defined implicit constructor function at line 6
    O1.display();
    return 0;
}

/* TERMINAL
1020*/