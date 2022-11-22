#include<iostream>
using namespace std;
class XYZ; //Forward Declaration
class ABC{
        int a;
    public:
        void input(int x){
            a = x;
        }
        friend void max(ABC, XYZ);
};
class XYZ{
        int b;
    public:
        void input(int x){
            b = x;
        }
        friend void max(ABC, XYZ);
};
void max(ABC A, XYZ X){
    int max = (A.a >= X.b) ? A.a : X.b;
    cout<<"Maximum: "<<max<<endl;
}
int main(){
    ABC A;
    XYZ X;
    A.input(3);
    X.input(4);
    max(A, X);
    return 0;
}

/* TERMINAL
Maximum: 4
*/