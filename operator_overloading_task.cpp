/* Write a program to overload increment operator '++' using member function */
#include <iostream>
using namespace std;
class number{
        int a, b, c;
    public:
        number(int p, int q, int r){
            a = p;
            b = q;
            c = r;
        }
        void display(){
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        void operator ++ (){
            ++a;
            ++b;
            ++c;
        }
};
int main(){
    number n1(10, 5, 6);
    n1.display();
    ++n1;
    n1.display();
    return 0;
}

/* OUTPUT
10 5 6
11 6 7
*/