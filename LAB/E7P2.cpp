/* Modify the class and program of first problem (E7P1.cpp) to handle same operations for 10 persons. */

/* E7P1 Question */
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
class Bank_Ac
{
    char name[MAX], type[MAX];
    unsigned long int Ac_No;
    float balance;
    static int count;

public:
    Bank_Ac()
    {
        cout << "S. N. " << ++count;
        cout << "\tEnter Name: ";
        fgets(name, MAX, stdin);
        if (count != 1)
            fgets(name, MAX, stdin);
        cout << "\tAccount Number: ";
        cin >> Ac_No;
        cout << "\tType of Account: ";
        fgets(type, MAX, stdin);
        fgets(type, MAX, stdin);
        cout << "\tBalance: Rs. ";
        cin >> balance;
    }
    void deposit(float);
    void withdraw(float);
    void display()
    {
        cout << "\t" << name << "\tBalance: Rs. " << balance << endl;
    }
};
int Bank_Ac::count;
void Bank_Ac::deposit(float amt)
{
    balance += amt;
    cout << "Rs. " << amt << " was deposited.\n";
}
void Bank_Ac::withdraw(float amt)
{
    if (amt > balance)
        cout << "Amount requested is more than the balance\n";
    else
    {
        balance -= amt;
        cout << "Rs. " << amt << " was withdrawn\n";
    }
}
float input()
{
    float amt;
    cout << "Enter amount: Rs. ";
    cin >> amt;
    return amt;
}
int main()
{
    Bank_Ac B[10];
label:
    int index;
    cout << "Enter \t1 to continue\n\t0 to exit\n";
    cin >> index;
    if (index == 0)
        return 0;
    cout << "Enter Serial Number: ";
    cin >> index;
    index -= 1;
    while (true)
    {
        int option;
        cout << "Choose an operation: \n\t1. Deposit\n\t2. Withdraw\n\t3. Check Balance\n\t4. Log Out\n";
        cin >> option;
        switch (option)
        {
        case 1:
            B[index].deposit(input());
            break;
        case 2:
            B[index].withdraw(input());
            break;
        case 3:
            B[index].display();
            break;
        default:
            goto label;
        }
    }
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o E7P2.exe .\E7P2.cpp
PS D:\Junior\Study\Object-Oriented-Programming> ./E7P2.exe
S. N. 1 Enter Name: Ashish Kumar Panda
        Account Number: 2102041054
        Type of Account: Current
        Balance: Rs. 210000
S. N. 2 Enter Name: Jibesh Kumar Panda 
        Account Number: 2102040024
        Type of Account: Savings
        Balance: Rs. 50000
S. N. 3 Enter Name: Ramakant Sahoo
        Account Number: 2102041050
        Type of Account: Trading
        Balance: Rs. 500000000
Enter   1 to continue
        0 to exit
1
Enter Serial Number: 2
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Log Out
2
Enter amount: Rs. 100000
Amount requested is more than the balance
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Log Out
3
        Jibesh Kumar Panda
        Balance: Rs. 50000
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Log Out
4
Enter   1 to continue
        0 to exit
1
Enter Serial Number: 3
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Log Out
3
        Ramakant Sahoo
        Balance: Rs. 5e+08
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Log Out
2
Enter amount: Rs. 499999000 
Rs. 4.99999e+08 was withdrawn
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Log Out
3
        Ramakant Sahoo
        Balance: Rs. 992
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Log Out
4
Enter   1 to continue
        0 to exit
1
Enter Serial Number: 1
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Log Out
3
        Ashish Kumar Panda
        Balance: Rs. 210000
Choose an operation:
        1. Deposit
        2. Withdraw
        3. Check Balance
        4. Log Out
4
Enter   1 to continue
        0 to exit
0
*/