#include<iostream>
using namespace std;
class Complex{
        float real, img;
    public:
        void input(float r, float i){
            real = r;
            img = i;
        }
        void display(){
            cout<<real<<" + i"<<img<<endl;
        }
        friend Complex sum(Complex, Complex);
};
Complex sum(Complex C1, Complex C2){
    Complex C3;
    C3.real = C1.real + C2.real;
    C3.img = C1.img + C2.img;
    return C3;
}
int main(){
    Complex C1, C2, C3;
    C1.input(2, 3.5);
    C2.input(3, 2.5);
    C3 = sum(C1, C2);
    C1.display();
    C2.display();
    C3.display();
    return 0;
}

/* TERMINAL
2 + i3.5
3 + i2.5
5 + i6
*/