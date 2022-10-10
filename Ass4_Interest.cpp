/* Write a program to calculate the simple interest and compound
interest for a given principal amount and time period. */
#include <iostream>
using namespace std;
class Interest{
    float pr_amt;
    int time_mon;
    float rate = 0.05;
    float sim_int, cmp_int;
    void calc();
  public:
    Interest(){
      cout<<"Enter Principal Amount: ";
      cin>>pr_amt;
      cout<<"Time Period (In Months): ";
      cin>>time_mon;
    }
    void display(){
      calc();
      cout<<"Simple Interest: "<<sim_int<<"\nCompound Interest (PA): "<<cmp_int<<endl;
    }
};
void Interest::calc(){
  int year = time_mon / 12;
  float rem = (float)(time_mon % 12) / 12.0;
  sim_int = pr_amt * rate * (year + rem);
  float temp = pr_amt; 
  for(int i = year; i > 0; i--)
    temp += temp * rate;
  temp += temp * rate * rem;
  cmp_int = temp - pr_amt;
}
int main(){
  Interest I;
  I.display();
  return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o Ass4_Interest.exe .\Ass4_Interest.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\Ass4_Interest.exe
Enter Principal Amount: 12000
Time Period (In Months): 15
Simple Interest: 750
Compound Interest (PA): 757.5
*/