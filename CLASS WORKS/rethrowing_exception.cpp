/* Write a program to divide two numbers and use rethrow */
#include <iostream>
using namespace std;
void divide(float x, float y){
    try{
        if(y == 0.0)
            throw 0.0;
        else
            cout<<(x/y)<<endl;
    }
    catch(double c){
        throw;
    }
}
int main(){
    try{
        divide(5, 0);
    }
    catch(double){
        cout<<"Divide by zero exception"<<endl;
    }
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o .\rethrowing_exception.exe .\rethrowing_exception.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> .\rethrowing_exception.exe
Divide by zero exception
*/