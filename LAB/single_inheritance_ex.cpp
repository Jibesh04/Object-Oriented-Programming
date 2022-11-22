/* Write a program to define a class basic information having data members
roll and name. Derive a class additional information from it having data members
age and height. Define appropriate member functions to read and display information */
// (Use Private Members in the base class)
#include <iostream>
using namespace std;
class basic_info{
        int roll;
        char name[20];
    public:
        void input(){
            cout<<"Enter Roll: ";
            cin>>roll;
            cout<<"Enter Name: ";
            fgets(name, 20, stdin);
            fgets(name, 20, stdin);
        }
        void display(){
            cout<<"Roll: "<<roll<<"\nName: "<<name;
        }
};
class add_info:private basic_info{
        int age;
        float height;
    public:
        void input_1(){
            input();
            cout<<"Enter Age: ";
            cin>>age;
            cout<<"Enter Height: ";
            cin>>height;
        }
        void display_1(){
            display();
            cout<<"Age: "<<age<<"\nHeight: "<<height<<" ft\n";
        }
};
int main(){
    add_info A1;
    // A1.input(); will generate error
    // A1.display(); inaccessible
    A1.input_1();
    A1.display_1();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o single_inheritance_ex.exe .\single_inheritance_ex.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\single_inheritance_ex.exe
Enter Roll: 2102040024
Enter Name: Jibesh Kumar Panda
Enter Age: 18
Enter Height: 5.7
Roll: 2102040024
Name: Jibesh Kumar Panda
Age: 18
Height: 5.7 ft
*/