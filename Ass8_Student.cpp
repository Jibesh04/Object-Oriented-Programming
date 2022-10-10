/* Write a program for finding the average age of a class Student.
You have to pass an array of Student objects as a parameter to the function.
Assume the default class strength as 50 and use it as a default argument. */
#include <iostream>
#define MAX 30
using namespace std;
class Student{
        int regd;
        char name[MAX];
        float CGPA;
        static int sl_no;
    public:
        int age;
        Student(){
            cout<<"S.N. "<<++sl_no<<endl;
            cout<<"\tRegistration Number: ";
            cin>>regd;
            cout<<"\tName: ";
            fgets(name, MAX, stdin);
            fgets(name, MAX, stdin);
            cout<<"\tAge: ";
            cin>>age;
            cout<<"\tCGPA: ";
            cin>>CGPA;
        }
        friend void average(Student S[], int);
};
int Student::sl_no;
void average(Student S[], int n = 50){
    int total_age = 0;
    for(int i = 0; i < n; i++)
        total_age += S[i].age;
    cout<<"Average age = "<<(float)total_age/(float)n<<endl;
}
int main(){
    char opt;
    int n;
    cout<<"For class strength, Press\n\tM for Manual input\n\tany other key for Default"<<endl;
    cin>>opt;
    if(opt == 'M' || opt == 'm'){
        cout<<"Enter the strength: ";
        cin>>n;
    }
    else
        n = 50;
    Student S[n];
    average(S, n);    
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o Ass8_Student.exe .\Ass8_Student.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\Ass8_Student.exe    For class strength, Press
        M for Manual input
        any other key for Default
M
Enter the strength: 2
S.N. 1
        Registration Number: 2102040024
        Name: Demo Name
        Age: 18
        CGPA: 0   
S.N. 2
        Registration Number: 2102040023
        Name: Demo Name 2
        Age: 20
        CGPA: 0
Average age = 19
*/