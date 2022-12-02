/* Write a program to implement stack using exception class */
#include <iostream>
using namespace std;
const int m = 3;
class Stack{
        int S[m];
        int top;
    public:
        Stack(){top = -1;}
        class overflow{};
        class underflow{};
        void push(int data){
            if(top == m-1)
                throw overflow();
            else
                S[++top] = data;
        }
        int pop(){
            if(top == -1)
                throw underflow();
            else
                return S[top--];
        }
        void display(){
            if(top == -1)
                cout<<"Empty"<<endl;
            else{
                for(int i = 0; i <= top; i++)
                    cout<<" "<<S[i];
                cout<<endl;
            }
        }
};
int main(){
    Stack S;
    try{
        S.push(5);
        S.display();
        S.pop();
        S.display();
        S.pop();
    }
    catch(Stack::overflow){
        cout<<"Stack Overflow"<<endl;
    }
    catch(Stack::underflow){
        cout<<"Stack Underflow"<<endl;
    }
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o .\exception_class.exe .\exception_class.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> .\exception_class.exe
 5
Empty
Stack Underflow
*/