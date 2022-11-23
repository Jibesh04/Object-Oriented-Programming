/* Write a function template to swap two datae (two numbers) */
#include <iostream>
using namespace std;
template <class T>
void swap_numbers (T& a, T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}
void helper(int& m, int& n, float& s, float& t){
    swap_numbers(m, n);
    swap_numbers(s, t);
}
int main(){
    int m, n;
    float s, t;
    cout<<"Enter two integers: ";
    cin>>m>>n;
    cout<<"Enter two float numbers: ";
    cin>>s>>t;
    cout<<"Swapping through helper..."<<endl;
    helper(m, n, s, t);
    cout<<m<<" "<<n<<endl;
    cout<<s<<" "<<t<<endl;
    cout<<"Again, swapping manually..."<<endl;
    swap_numbers(m, n);
    swap_numbers(s, t);
    cout<<m<<" "<<n<<endl;
    cout<<s<<" "<<t<<endl;
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o template_1.exe .\template_1.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> .\template_1.exe
Enter two integers: 12 15
Enter two float numbers: 0.2 2.53
Swapping through helper...
15 12
2.53 0.2
Again, swapping manually...
12 15
0.2 2.53
*/