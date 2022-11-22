/* Write a program to overload compound addition operator for concatenating two strings */
// Using Member Function
#include <iostream>
#include <cstring>
using namespace std;
class String{
        char str[20];
    public:
        String(){}
        String(char n[]){strcpy(str, n);}
        void display(){
            cout<<str<<endl;
        }
        void operator += (String S){
            strcat(str, " ");
            strcat(str, S.str);
        }
};
int main(){
    char c1[] = "Hello", c2[] = "World";
    String S1(c1), S2(c2);
    S1.display();
    S2.display();
    S1 += S2;
    S1.display();
    return 0;
}

/* OUTPUT
Hello
World
Hello World
*/