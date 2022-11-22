/* Write a Program to display your name, regd no., address and last CGPA */
#include <iostream>
#include <cstring>
using namespace std;
class Details{
        string name, address;
        unsigned regd;
        float cgpa;
    public:
        void input();
        void display();
};
void Details::input(){
    cout<<"Enter name: ";
    getline(cin, name);
    cout<<"Enter regd. number: ";
    cin>>regd;
    cout<<"Enter address: ";
    getline(cin, address);
    getline(cin, address);
    cout<<"Enter last CGPA: ";
    cin>>cgpa;
    cout<<"Details Stored"<<endl;
}
void Details::display(){
    cout<<"Name: "<<name<<"\nRegd. No.: "<<regd<<"\nAddress: "<<address<<"\nLast CGPA: "<<cgpa<<endl;
}
int main(){
    Details D1;
    D1.input();
    D1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\LAB> g++ -o E1P2.exe .\E1P2.cpp
PS D:\Junior\Study\Object-Oriented-Programming\LAB> .\E1P2.exe
Enter name: Jibesh Kumar Panda
Enter regd. number: 2102040024
Enter address: At/Po: Pandasuni, Dist: Balasore
Enter last CGPA: 9.90
Details Stored
Name: Jibesh Kumar Panda
Regd. No.: 2102040024
Address: At/Po: Pandasuni, Dist: Balasore
Last CGPA: 9.9
*/