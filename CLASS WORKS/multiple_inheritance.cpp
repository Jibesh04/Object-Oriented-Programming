/* Define two classes OOP Theory Marks and OOP Lab Marks and derive a class Total Marks from these two. Write a program to display total marks. */
#include <iostream>
using namespace std;
class OOP_TM{
    public:
        float tm;
        void input(){
            cout<<"Enter the theory marks: ";
            cin>>tm;
        }
        void display(){
            cout<<"Theory Marks: "<<tm<<endl;
        }
};
class OOP_LM{
    public:
        float lm;
        void input(){
            cout<<"Enter the lab marks: ";
            cin>>lm;
        }
        void display(){
            cout<<"Lab Marks: "<<lm<<endl;
        }
};
class Total:private OOP_TM, private OOP_LM{
        float total;
        void calc(){
            total = tm + lm;
        }
    public:
        void input(){
            OOP_TM::input();
            OOP_LM::input();
        }
        void display(){
            OOP_TM::display();
            OOP_LM::display();
            calc();
            cout<<"Total Marks: "<<total<<endl;
        }
};
int main(){
    Total T1;
    T1.input();
    T1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o multiple_inheritance.exe .\multiple_inheritance.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\multiple_inheritance.exe
Enter the theory marks: 71
Enter the lab marks: 30
Theory Marks: 71
Lab Marks: 30
Total Marks: 101
*/