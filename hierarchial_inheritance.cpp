/* DDefine a class Accounts having data members account holder name and account number.
Derive two classes: Savings and Current account.
Savings account provides compound interest and withdrawal facility but no check book facility.
Current account provudes check facility but no interest. Also, it requires to maintain a minimum balance.
If the balance falls below this level, a service charge is imposed.
Include necessary member functions in order to 
(i) achieve deposit from a customer and update the balance,
(ii) display the balance
(iii) compute and deposit interest,
(iv) permit withdrawal and update the balance,
(v) check for minimum balance, impose penalty if necessary and update the balance. */
#include <iostream>
using namespace std;
int count = 0;
class Accounts{
    public:
        char name[25];
        unsigned int ac_no;
        float balance;
        void input();
        void display(){
            cout<<"Name: "<<name<<"Account Number: "<<ac_no<<"\nBalance: Rs. "<<balance<<endl;
        }
        void deposit(float);
        void withdraw(float);
};
void Accounts::input(){
    cout<<"Enter Name: ";
    if(count != 0)
        fgets(name, 25, stdin);
    count++;
    fgets(name, 25, stdin);
    cout<<"Account Number: ";
    cin>>ac_no;
    cout<<"Opening Balance: Rs. ";
    cin>>balance;
}
void Accounts::deposit(float amt){
    balance += amt;
    cout<<"Rs. "<<amt<<" Credited\n";
}
void Accounts::withdraw(float amt){
    if(amt > balance)
        cout<<"Insufficient Balance\n";
    else{
        balance -= amt;
        cout<<"Rs. "<<amt<<" Debited\n";
    }
}
class Savings:public Accounts{
        float intr;
        void calc();
    public:
        void interest();
};
void Savings::calc(){
    float pr_amt = balance;
    float int_rate;
    int time_mon;
    cout<<"Interest rate: ";
    cin>>int_rate;
    cout<<"Time Duration (in Months): ";
    cin>>time_mon;
    int durn = time_mon / 6;
    float rem = (float)(time_mon %= 6) / 6.0;
    for(int i = durn; i > 0; i--)
        pr_amt += pr_amt * int_rate;
    pr_amt += pr_amt * int_rate * rem;
    intr = pr_amt - balance;
}
void Savings::interest(){
    calc();
    balance += intr;
    cout<<"Balance After Interest Computation : Rs. "<<balance<<endl;
}
class Current:public Accounts{
        float min;
    public:
        void check_min();
};
void Current::check_min(){
    cout<<"Enter the minimum balance: Rs. ";
    cin>>min;
    if(min > balance){
        float sr_chrg;
        cout<<"Balance Below Limit\n";
        cout<<"Enter the additional Service Charge: Rs. ";
        cin>>sr_chrg;
        balance -= sr_chrg;
        cout<<"Rs. "<<sr_chrg<<" was Deducted\n";
    }
}
float input(){
    float amt;
    cout<<"Enter the amount: ";
    cin>>amt;
    return amt;
}
int main(){
    Savings S1;
    Current C1;
    cout<<"Savings Account...\n";
    S1.input();
    cout<<"For Deposit...\n";
    S1.deposit(input());
    cout<<"For Withdraw...\n";
    S1.withdraw(input());
    S1.display();
    S1.interest();
    cout<<"Current Account...\n";
    C1.input();
    C1.check_min();
    C1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o hierarchial_inheritance.exe .\hierarchial_inheritance.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\hierarchial_inheritance.exe
Savings Account...
Enter Name: Jibesh Kumar Panda 
Account Number: 2102040024
Opening Balance: Rs. 50000
For Deposit...
Enter the amount: 3000 
Rs. 3000 Credited
For Withdraw...
Enter the amount: 2000
Rs. 2000 Debited
Name: Jibesh Kumar Panda
Account Number: 2102040024
Balance: Rs. 51000
Interest rate: 0.05
Time Duration (in Months): 19
Balance After Interest Computation : Rs. 59530.9
Current Account...
Enter Name: Jibesh Kumar Panda
Account Number: 2102040024
Opening Balance: Rs. 50000
Enter the minimum balance: Rs. 50001
Balance Below Limit
Enter the additional Service Charge: 12
Rs. 12 was Deducted
Name: Jibesh Kumar Panda
Account Number: 2102040024
Balance: Rs. 49988
*/