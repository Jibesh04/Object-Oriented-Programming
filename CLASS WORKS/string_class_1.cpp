/* Write a program to create an empty string object, an object storing "New"
and another user input string object. Use + operator to concatenate them and
store in the empty string */
#include <iostream>
#include <string>
using namespace std;
int main(){
    string S1, S2("New"), S3;
    cout<<"Enter a string: ";
    cin>>S3;
    S1 = S2 + S3;
    cout<<S1<<endl;
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o .\string_class_1.exe .\string_class_1.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> .\string_class_1.exe
Enter a string:  Delhi
NewDelhi
*/