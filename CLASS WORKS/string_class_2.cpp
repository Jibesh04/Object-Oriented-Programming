/* Program to observe string manipulations */
#include <iostream>
#include <string>
using namespace std;
int main(){
    string S1("12345"), S2("abcde");
    cout<<"Insert Function Called: ";
    S1.insert(4, S2);
    cout<<S1<<endl;
    // It will insert the string S2 inside S1 at location (index) 4
    cout<<"Erase Function Called: ";
    S1.erase(4, 5);
    cout<<S1<<endl;
    // It will remove specified number of characters (second argument)
    // from the string at specified location (first argument)
    cout<<"Replace Function Called: ";
    S2.replace(1, 3, S1);
    cout<<S2<<endl;
    // Replace three (second argument) characters in S2 with
    // S1 (third argument) at location 1 (first argument)
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o string_class_2.exe .\string_class_2.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> ./string_class_2.exe
Insert Function Called: 1234abcde5
Erase Function Called: 12345
Replace Function Called: a12345e
*/