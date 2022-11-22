/* Write a program to perform operator overloading to evaluate the following expression
Obj1 * Obj2 - Obj3
*/
#include <iostream>
using namespace std;
class Object{
        int num;
    public:
        Object(){num = 0;}
        Object(int val){num = val;}
        void display(){
            cout<<num<<endl;
        }
        // void operator * (Object O1){
        //     num = num * O1.num;
        // }
        // void operator - (Object O1){
        //     num = num - O1.num;
        // }
        Object operator * (Object O2){
            Object temp;
            temp.num = num * O2.num;
            return temp;
        }
        Object operator - (Object O2){
            Object temp;
            temp.num = num - O2.num;
            return temp;
        }
};
int main(){
    Object O1(0), O2(5), O3(1), ans;
    // O1 * O2;
    // O1 - O3;
    // O1.display();
    ans = O1 * O2 - O3;
    ans.display();
    return 0;
}

/* OUTPUT
-1
*/