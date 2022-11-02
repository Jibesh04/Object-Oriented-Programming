/* Write a program to overload increment operator '++' using friend function */
#include <iostream>
using namespace std;
class number{
        int a, b, c;
    public:
        number(){}
        number(int p, int q, int r){
            a = p;
            b = q;
            c = r;
        }
        void display(){
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        friend number operator ++ (number);
};
number operator ++ (number n){
    number temp;
    temp.a = ++n.a;
    temp.b = ++n.b;
    temp.c = ++n.c;
    return temp;
}
int main(){
    number n1(10, 5, 6);
    number n2 = ++n1;
    n1.display();
    n2.display();
    return 0;
}

/* OUTPUT
10 5 6
11 6 7
*/