/* Write a program to overload binary addition operator for adding two complex numbers using non-member funciton */
#include <iostream>
using namespace std;
class Complex{
        float rl, img;
    public:
        Complex(){rl = 0; img = 0;}
        Complex(float r, float i){rl = r; img = i;}
        void display(){
            cout<<"\t"<<rl<<" + "<<img<<"i\n";
        }
        friend Complex operator + (Complex, Complex);
};
Complex operator + (Complex C1, Complex C2){
    Complex temp;
    temp.rl = C1.rl + C2.rl;
    temp.img = C1.img + C2.img;
    return temp;
}
int main(){
    Complex C1(5, 7), C2(6, 8);
    C1.display();
    C2.display();
    Complex C3 = C1 + C2;
    C3.display();
    return 0;
}
/* OUTPUT
    5 + 7i
	6 + 8i
	11 + 15i
*/