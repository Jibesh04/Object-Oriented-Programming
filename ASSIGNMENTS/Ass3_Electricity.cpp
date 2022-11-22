 /* An electricity board charges 60 Paisa per unit for the first hundred units,
80 Paisa per unit for next 200 units, 90 Paisa per unit beyond 300 units. All
the users are charged a minimum of Rs. 50 & if the total amount is more than
Rs. 300, then an additional surcharge of 15% is added.
Write a program to read the name of the user and the number of units and print
the charges with name. */
#include <iostream>
#include <cstring>
#define MAX 50
using namespace std;
class Electricity{
    char name[MAX];
    float units;
    float charges;
    void calc();
  public:
    Electricity(){
      cout<<"Enter name: ";
      fgets(name, MAX, stdin);
      cout<<"No. of units: ";
      cin>>units;
    }
    void display(){
      calc();
      cout<<"Name: "<<name<<"Charges: Rs. "<<charges<<endl;
    }
};
void Electricity::calc(){
  if(units <= 100){
    charges = units * 60;
    if(charges < 50*100)
      charges = 50*100;
  }
  else{
    charges = (units - 100) * 80 + 100 * 60;
    if(charges > 300*100)
      charges += charges * (0.15);
  }
  charges /= 100;
}
int main(){
  Electricity E;
  E.display();
  return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o Ass3_Electricity.exe .\Ass3_Electricity.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\Ass3_Electricity.exe                            
Enter name: Jibesh Kumar Panda
No. of units: 375
Name: Jibesh Kumar Panda
Charges: Rs. 280
*/