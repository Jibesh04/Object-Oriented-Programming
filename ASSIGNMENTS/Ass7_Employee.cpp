/* Define a class Employee containing employee number, 
name, address and number of dependants for the employee 
as the data member. Member functions are input and display details.
Define an array of twenty employees and display all employees with 
more than three dependants. */
#include <iostream>
#define MAX 30
using namespace std;
class Employee{
        static int sl_no;
        int emp_no, dependants;
        char name[MAX], address[MAX];
    public:
        void input();
        friend int filter(Employee);
        void display();    
};
int Employee::sl_no = 1;
void Employee::input(){
    cout<<"S.N. "<<sl_no++<<" Enter the details...\n\tEmployee Number: ";
    cin>>emp_no;
    cout<<"\tName: ";
    fgets(name, MAX, stdin);
    fgets(name, MAX, stdin);
    cout<<"\tAddress: ";
    fgets(address, MAX, stdin);
    cout<<"\tNumber of Dependants: ";
    cin>>dependants;
}
int filter(Employee E){
    return (E.dependants > 3);
}
void Employee::display(){
    cout<<"\tEmployee Number: "<<emp_no<<"\n\tName: "<<name<<"\tAddress: "<<address<<"\tNumber of Dependants: "<<dependants<<endl;
}
int main(){
    int str = 20;
    Employee E[str];
    for(int i = 0; i < str; i++)
        E[i].input();
    cout<<"The required employee list is..."<<endl;
    for(int i = 0; i < str; i++){
        if(filter(E[i]) == 1){
            cout<<"S.N. "<<(i+1)<<endl;
            E[i].display();
        }
    }
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o Ass7_Employee.exe .\Ass7_Employee.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\Ass7_Employee.exe
S.N. 1 Enter the details...
        Employee Number: 2102040024
        Name: Jibesh Kumar Panda
        Address: Balasore, Odisha
        Number of Dependants: 3 
S.N. 2 Enter the details...
        Employee Number:
        ...
*/