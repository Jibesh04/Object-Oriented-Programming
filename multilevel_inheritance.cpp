/* Define a class Student having name and roll number as data members.
Derive a class Marks from Student with data members to store marks of three different subjects.
Derive a class Result from Marks having data members total and average.
Write a program to display name, roll number, marks, total and average. */
#include <iostream>
using namespace std;
class Student{
    public:
        char name[25];
        int roll_no;
        void input(){
            cout<<"Enter Name: ";
            fgets(name, 25, stdin);
            cout<<"Enter Roll Number: ";
            cin>>roll_no;
        }
        void display(){
            cout<<"Name: "<<name<<"Roll Number: "<<roll_no<<endl;
        }
};
class Marks:protected Student{
    public:
        float m1, m2, m3;
        void input(){
            cout<<"Enter the marks of three subjects: \n";
            cin>>m1>>m2>>m3;
        }
        void display(){
            cout<<"Marks Secured:\t"<<m1<<"\t"<<m2<<"\t"<<m3<<endl;
        }
};
class Result:private Marks{
        float total, avg;
        void calc(){
            total = m1 + m2 + m3;
            avg = total/3.0;
        }
    public:
        void input(){
            Student::input();
            Marks::input();
        }
        void display(){
            Student::display();
            Marks::display();
            calc();
            cout<<"Total Marks: "<<total<<"\nAverage Marks: "<<avg<<endl;
        }
};
int main(){
    Result R1;
    R1.input();
    R1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o multilevel_inheritance.exe .\multilevel_inheritance.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\multilevel_inheritance.exe
Enter Name: Jibesh Kumar Panda
Enter Roll Number: 2102040024
Enter the marks of three subjects:
97 99 92
Name: Jibesh Kumar Panda
Roll Number: 2102040024
Marks Secured:  97      99      92
Total Marks: 288
Average Marks: 96
*/