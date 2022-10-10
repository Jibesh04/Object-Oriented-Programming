/* Write a function power() to raise a number m to a power n.
The function takes a double value for m and int value for n, and returns the result correctly.
Use a default value of 2 for n to make the function to calculate squares when this argument is omitted.
Write a main function that gets the values of m and n
from the user to test the function */
#include <iostream>
using namespace std;
class Power{
    double m;
    float n;
  public:
    Power(){
      cout<<"Enter the base: ";
      cin>>m;
      cout<<"Enter the power: ";
      cin>>n;
    }
    friend double power(double, int);
    void display();
};
double power(double m, int n = 2){
  if(n == 0)
    return 1;
  return m * power(m, n-1);
}
void Power::display(){
  cout<<m<<" raised to the power "<<n<<" gives "<<power(m, n)<<endl;
}
int main(){
  Power P;
  P.display();
  double m;
  cout<<"For Square..."<<endl<<"Enter the number: ";
  cin>>m;
  cout<<"The square of "<<m<<" is "<<power(m);
  return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o Ass5_Power.exe .\Ass5_Power.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\Ass5_Power.exe
Enter the base: 3
Enter the power: 2
3 raised to the power 2 gives 9
For Square...
Enter the number: 2.5
The square of 2.5 is 6.25
*/