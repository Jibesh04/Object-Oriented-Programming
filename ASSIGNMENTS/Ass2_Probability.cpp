/* Wite a Program to calculate the variance and standard deviation of 'n' numbers */
#include <iostream>
#include <cmath>
#define MAX 100
using namespace std;
class Probability{
    int n;
    float obs[MAX];
    float sum = 0.0, mean, variance = 0.0, std_dvn;
    void calc();
  public:
    Probability(){
      cout<<"Enter the number of observations: ";
      cin>>n;
      cout<<"Enter the observations: "<<endl;
      for(int i = 0; i < n; i++)
        cin>>obs[i];
    }
    void display();
};
void Probability::calc(){
  for(int i = 0; i < n; i++)
    sum += obs[i];
  mean = sum/n;
  for(int i = 0; i < n; i++)
    variance += pow(obs[i] - mean, 2);
  variance /= n;
  std_dvn = sqrt(variance);
}
void Probability::display(){
  calc();
  cout<<"Mean = "<<mean<<endl<<"Variance = "<<variance<<endl<<"Standard Deviation = "<<std_dvn<<endl;
}
int main(){
  Probability P;
  P.display();
  return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o Ass2_Probability.exe .\Ass2_Probability.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\Ass2_Probability.exe
Enter the number of observations: 3
Enter the observations: 
12 11.7 10.9
Mean = 11.5333
Variance = 0.215556
Standard Deviation = 0.46428
*/