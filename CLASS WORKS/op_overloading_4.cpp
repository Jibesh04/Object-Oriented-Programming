/* Write a program to overload compound addition operator for concatenating two strings */
// Using Friend Function
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
        friend void operator += (String&, String); // Call by reference required
};
void operator += (String& S1, String S2){
    strcat(S1.str, " ");
    strcat(S1.str, S2.str);
}
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