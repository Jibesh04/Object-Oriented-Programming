/* Define a class Student having attributes name and roll number. Derive a class Test having attributes to store
mark of two subjects. Define a class Sport having attributes to store Sport Mark. Derive a class Result from
Test and Sport to calculate total marks and average. */
#include <iostream>
using namespace std;
int count = 0;
class Student{
    public:
        char name[25];
        int roll_no;
        void input();
        void display(){
            cout<<"Name: "<<name<<"Roll Number: "<<roll_no<<endl;
        }
};
void Student::input(){
    cout<<"Enter Name: ";
    fgets(name, 25, stdin);
    if(count != 0)
        fgets(name, 25, stdin);
    count++;
    cout<<"Roll Number: ";
    cin>>roll_no;
}
class Test:public Student{
    public:
        float m1, m2;
        void input();
        void display(){
            cout<<"Marks: "<<m1<<" "<<m2<<endl;
        }
};
void Test::input(){
    cout<<"Enter Marks of two Subjects: \n";
    cin>>m1>>m2;
}
class Sport{
    public:
        float sport_mark;
        void input();
        void display(){
            cout<<"Sport Mark: "<<sport_mark<<endl;
        }
};
void Sport::input(){
    cout<<"Enter Sport Mark: ";
    cin>>sport_mark;
}
class Result:private Test, private Sport{
        float total, avg;
        void calc();
    public:
        void input(){
            Student::input();
            Test::input();
            Sport::input();
        }
        void display(){
            Student::display();
            Test::display();
            Sport::display();
            calc();
            cout<<"Total Marks: "<<total<<"\nAverage: "<<avg<<endl;
        }
};
void Result::calc(){
    total = m1 + m2 + sport_mark;
    avg = total/3.0;
}
int main(){
    Result R1;
    R1.input();
    R1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> .\hybrid_inheritance.exe     
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o hybrid_inheritance.exe .\hybrid_inheritance.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\hybrid_inheritance.exe
Enter Name: Jibesh Kumar Panda
Roll Number: 2102040024
Enter Marks of two Subjects: 
97 90
Enter Sport Mark: 78
Name: Jibesh Kumar Panda
Roll Number: 2102040024
Marks: 97 90
Sport Mark: 78
Total Marks: 265
Average: 88.3333
*/