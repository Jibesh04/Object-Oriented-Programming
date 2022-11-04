/* Write a program to display a time in hours and minutes where input is given as seconds. */
#include <iostream>
using namespace std;
class Time{
        int hours;
        int minutes;
    public:
        Time(int sec){
            hours = sec / 3600;
            sec %= 3600;
            minutes = sec / 60;
        }
        void display(){
            cout<<hours<<" hours : "<<minutes<<" minutes\n";
        }
};
int main(){
    int n;
    cout<<"Enter the time in seconds: ";
    cin>>n;
    Time t1(n);
    t1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o type_casting.exe .\type_casting.cpp 
PS D:\Junior\Study\Object-Oriented-Programming> .\type_casting.exe
Enter the time in seconds: 5000
1 hours : 23 minutes
*/