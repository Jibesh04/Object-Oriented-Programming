/* Write a program to overload greater than operator for finding largest among the two objects of a class having an integer data member */
// Using friend function
#include <iostream>
using namespace std;
class number{
        int n;
    public:
        number(){}
        number(int num){n = num;};
        void display(){
            cout<<n<<endl;
        }
        friend int operator > (number, number);
};
int operator > (number n1, number n2){
    return (n1.n > n2.n);
}
int main(){
    number n1(10), n2(5);
    n1.display();
    n2.display();
    cout<<"Finding the largest...\n";
    if(n1 > n2)
        n1.display();
    else if(n2 > n1)
        n2.display();
    else{
        cout<<"Both Are Equal\n";
        n1.display();
    }
    return 0;
}

/* OUTPUT
10
5
Finding the largest...
10
*/