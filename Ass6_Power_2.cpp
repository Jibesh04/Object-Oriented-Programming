/* Write a function that performs the same operation
as that of Exercise 4.7 but takes an int value for m. 
Both the functions should have the same name.
Write a main that calls both the functions.
Use the concept of function overloading */

/* 4.7 Write a function power() to raise a number m to a power n.
The function takes a double value for m and int value for n, and returns the result correctly.
Use a default value of 2 for n to make the function to calculate squares when this argument is omitted.
Write a main function that gets the values of m and n
from the user to test the function */

#include <iostream>
using namespace std;
class Power{
  public:
    double power(double, int);
    int power(int, int);
};
double Power::power(double m, int n = 2){
  if(n == 0)
    return 1;
  return m * power(m, n-1);
}
int Power::power(int m, int n = 2){
  if(n == 0)
    return 1;
  return m * power(m, n-1);
}
int main(){
  Power P;
  cout<<"Calling power(5.3, 3)..."<<endl<<P.power(5.3, 3)<<endl;
  cout<<"Calling power(2.5)..."<<endl<<P.power(2.5)<<endl;
  cout<<"Calling power(5, 3)..."<<endl<<P.power(5, 3)<<endl;
  cout<<"Calling power(2)..."<<endl<<P.power(2)<<endl;
  return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o Ass5_Power.exe .\Ass5_Power.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\Ass6_Power_2.exe

Calling power(5.3, 3)...
148.877
Calling power(2.5)...
6.25
Calling power(5, 3)...
125
Calling power(2)...
4
*/