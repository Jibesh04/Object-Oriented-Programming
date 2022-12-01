/* Write a program to evaluate the expression t = z / (x - y) using exceptions */
#include <iostream>
using namespace std;
void eval(int x, int y, int z){
    try{
        if((x - y) == 0)
            throw (x - y);
        else
            cout<<z / (x - y)<<endl;
    }
    catch(int c){
        cout<<"Divide by zero error"<<endl;
    }
}
int main(){
    eval(10, 3, 63);
    eval(2, 2, 2);
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o exception_handling_1.exe .\exception_handling_1.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> .\exception_handling_1.exe
9
Divide by zero error
*/