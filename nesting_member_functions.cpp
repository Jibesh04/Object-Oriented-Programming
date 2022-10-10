#include<iostream>
using namespace std;
class Number{
    int a, b, c;
    int largest();
  public:
    void input();
    void output();
};
void Number::input(){
  cout<<"Enter three numbers: ";
  cin>>a>>b>>c;
}
int Number::largest(){
  int largest = (a <= b) ? b : a;
  if(largest == a)
    largest = (a <= c) ? c : a;
  else if(largest == b)
    largest = (b <= c) ? c : b;
  return largest;
}
void Number::output(){
  cout<<"Largest Number is: "<<largest()<<endl;
}
int main(){
  Number n1;
  n1.input();
  n1.output();
  return 0;
}

/* TERMINAL
> g++ -o nesting_member_functions.exe .\nesting_member_functions.cpp
> .\nesting_member_functions.exe
Enter three numbers: 123 122 111
Largest Number is: 123 
*/
