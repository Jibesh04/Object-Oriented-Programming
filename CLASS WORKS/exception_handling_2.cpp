// Using Multiple Catch Blocks
/* Write a program to print digit other than '1', '0', '-1'. */
#include <iostream>
using namespace std;
void test(int x){
    try{
        if (x == 0)
            throw 0;
        else if (x == 1)
            throw 'c';
        else if (x == -1)
            throw 1.1;
        else
            cout<<x<<endl;
    }
    catch(int n){
        cout<<"0 isn't allowed"<<endl;
    }
    catch(char c){
        cout<<"1 isn't allowed"<<endl;
    }
    catch(double f){
        cout<<"-1 isn't allowed"<<endl;
    }
}
int main(){
    test(3);
    test(-1);
    test(0);
    test(1);
    test(2);
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o .\exception_handling_2.exe .\exception_handling_2.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> .\exception_handling_2.exe
3
-1 isn't allowed
0 isn't allowed
1 isn't allowed
2
*/