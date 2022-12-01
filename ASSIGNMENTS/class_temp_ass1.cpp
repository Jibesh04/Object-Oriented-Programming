/* Write a class template to calculate the roots of a quadratic equation */
#include <iostream>
#include <cmath>
using namespace std;
template<class T>
class Roots{
        T a, b, c;
        T discriminant;
        double sqrt_d;
        void solve(){
            if(a == 0){
                cout<<"Not a quadratic equation"<<endl;
                exit(0);
            }
            if(discriminant > 0){
                cout<<"x1 = "<<((double)(-b + sqrt_d) / (double)(2*a))<<endl;
                cout<<"x2 = "<<((double)(-b - sqrt_d) / (double)(2*a))<<endl;
            }
            else if(discriminant == 0){
                cout<<"x1 = x2 = "<<(-(double)b / (double)(2*a))<<endl;
            }
            else{
                cout<<"x1 = "<<(-(double)b / (2 * a))<<" + "<<(sqrt_d /(double)(2 * a))<<"i"<<endl;
                cout<<"x2 = "<<(-(double)b / (2 * a))<<" - "<<(sqrt_d /(double)(2 * a))<<"i"<<endl;
            }
        }
    public:
        void setdata(){
            cout<<"For ax^2 + bx + c = 0"<<endl;
            cout<<"Enter a b and c (space separated): ";
            cin>>a>>b>>c;
            discriminant = b*b - 4*a*c;
            sqrt_d = sqrt(abs(discriminant));
        }
        void display(){
            cout<<"The entered equation is: "<<a<<"x^2 + "<<b<<"x + "<<c<<" = 0"<<endl;
            solve();
        }
};
int main(){
    Roots<int> R1;
    Roots<float> R2;
    cout<<"For Integral Coefficients...\n";
    R1.setdata();
    R1.display();
    cout<<"For Decimal Coefficients...\n";
    R2.setdata();
    R2.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\ASSIGNMENTS> g++ -o class_temp_ass1.exe .\class_temp_ass1.cpp
PS D:\Junior\Study\Object-Oriented-Programming\ASSIGNMENTS> ./class_temp_ass1.exe
For Integral Coefficients...
For ax^2 + bx + c = 0
Enter a b and c (space separated): 1 -1 0
The entered equation is: 1x^2 + -1x + 0 = 0
x1 = 1
x2 = 0
For Decimal Coefficients...
For ax^2 + bx + c = 0
Enter a b and c (space separated): 1.5 2.2 4
The entered equation is: 1.5x^2 + 2.2x + 4 = 0
x1 = -0.733333 + 1.45907i
x2 = -0.733333 - 1.45907i
*/