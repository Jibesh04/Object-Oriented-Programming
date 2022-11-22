/* Write a program to swap the values of a pair of integers */
#include <iostream>
using namespace std;
class Numbers{
    int n1;
    int n2;
  public:
    Numbers(){
      cout<<"Enter the numbers: ";
      cin>>n1>>n2;
    }
    void swap();
    void display(){
      cout<<n1<<"\t"<<n2<<endl;
    }
};
void Numbers::swap(){
  int temp = n1;
  n1 = n2;
  n2 = temp; 
}
int main(){
  Numbers N;
  cout<<"Before Swapping..."<<endl;
  N.display();
  N.swap();
  cout<<"After Swapping..."<<endl;
  N.display();
  return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o Ass1_Swap.exe .\Ass1_Swap.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\Ass1_Swap.exe
Enter the numbers: 12 25
Before Swapping...
12      25
After Swapping...
25      12
*/