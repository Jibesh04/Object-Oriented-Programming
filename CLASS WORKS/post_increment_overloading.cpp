/* overload post increment operator using member funciton */
#include <iostream>
using namespace std;
class Integer{
        int num;
    public:
        Integer(){num = 0;}
        Integer(int n){num = n;}
        Integer operator ++(int){
            Integer temp;
            temp.num = num++;
            return temp;
        }
        void display(){
            cout<<num<<endl;
        }
};
int main(){
    Integer n1(10), n2;
    cout<<"Before operation: ";
    n1.display();
    n2 = n1++;
    cout<<"After operation\nN1: ";
    n1.display();
    cout<<"N2: ";
    n2.display();
    return 0;
}

/* OUTPUT
Before operation: 10
After operation
N1: 11
N2: 10
*/