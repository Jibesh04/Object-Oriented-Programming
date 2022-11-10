/* Application of this pointer */
#include <iostream>
#include <cstring>
using namespace std;
class X{
        char name[30];
    public:
        void input(char name[]){
            // strcpy(name, name); will create ambiguity
            strcpy(this -> name, name); 
        }
        void display(){
            cout<<name<<endl;
        }
};
int main(){
    X x1;
    char name[] = "Jibesh";
    x1.input(name);
    x1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o this_pointer.exe .\this_pointer.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\this_pointer.exe
Jibesh
*/