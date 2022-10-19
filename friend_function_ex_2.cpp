#include<iostream>
using namespace std;
class XYZ; //Forward Declaration
class ABC{
        int a;
    public:
        void input(int x){
            a = x;
        }
        friend void swap(ABC&, XYZ&);
        friend void display(ABC, XYZ);
};
class XYZ{
        int b;
    public:
        void input(int x){
            b = x;
        }
        friend void swap(ABC&, XYZ&);
        friend void display(ABC, XYZ);
};
void swap(ABC& A, XYZ& X){
    int temp = A.a;
    A.a = X.b;
    X.b = temp;
}
void display(ABC A, XYZ X){
    cout<<A.a<<"\t"<<X.b<<endl;
}
int main(){
    ABC A;
    XYZ X;
    A.input(3);
    X.input(4);
    display(A, X);
    swap(A, X);
    display(A, X);
    return 0;
}
