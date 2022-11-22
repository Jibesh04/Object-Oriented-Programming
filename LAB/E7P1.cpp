/* Define a class to represent a bank account having data members:
    Name of the depositor
    account number
    type of account
    balance amount in the account
and member functions to assign initial values, deposit an amount, withdraw an amount after checking the balancce 
(otherwise prompt "Amount requested is more than the balance"), to display name and balance. */
#include <iostream>
#define MAX 30
using namespace std;
class Bank_Ac{
        char name[MAX], type[MAX];
        unsigned long int Ac_No;
        float balance;
    public:
        Bank_Ac(){
            cout<<"Enter Name: ";
            fgets(name, MAX, stdin);
            cout<<"Account Number: ";
            cin>>Ac_No;
            cout<<"Type of Account: ";
            fgets(type, MAX, stdin);
            fgets(type, MAX, stdin);
            cout<<"Balance: Rs. ";
            cin>>balance;
        }
        void deposit(float);
        void withdraw(float);
        void display(){
            cout<<"\t"<<name<<"\tBalance: Rs. "<<balance<<endl;
        }
};
void Bank_Ac::deposit(float amt){
    balance += amt;
    cout<<"Rs. "<<amt<<" was deposited.\n";
}
void Bank_Ac::withdraw(float amt){
    if(amt > balance)
        cout<<"Amount requested is more than the balance\n";
    else{
        balance -= amt;
        cout<<"Rs. "<<amt<<" was withdrawn\n";
    }
}
float input(){
    float amt;
    cout<<"Enter amount: Rs. ";
    cin>>amt;
    return amt;
}
int main(){
    Bank_Ac B1;
    while(true){
        int option;
        cout<<"Choose an operation: \n\t1. Deposit\n\t2. Withdraw\n\t3. Check Balance\n\t4. Exit\n";
        cin>>option;
        switch(option){
            case 1:
                B1.deposit(input());
                break;
            case 2:
                B1.withdraw(input());
                break;
            case 3:
                B1.display();
                break;
            default:
                return 0;
        }
    }
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o E7P1.exe .\E7P1.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\E7P1.exe
Enter Name: Jibesh Kumar Panda
Account Number: 2102040024
Type of Account: Savings
Balance: Rs. 50000
Choose an operation: 
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Exit
2
Enter amount: Rs. 2088.50
Rs. 2088.5 was withdrawn
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Exit
3
        Jibesh Kumar Panda
        Balance: Rs. 47911.5
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Exit
1
Enter amount: Rs. 2088.50
Rs. 2088.5 was deposited.
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Exit
3
        Jibesh Kumar Panda
        Balance: Rs. 50000
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Exit
4
*/