/* Write a function template to display the data of
different data types using a function display having two arguments */
#include <iostream>
using namespace std;
template <class T1, class T2>
void display(T1 a, T2 b){
    cout<<a<<" "<<b<<endl;
}
int main(){
    int a;
    float b;
    cout<<"Enter the Integer: ";
    cin>>a;
    cout<<"Enter the Float: ";
    cin>>b;
    display(a, b);
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o template_3.exe .\template_3.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> .\template_3.exe
Enter the Integer: 13
Enter the Float: 12.5
13 12.5
*/