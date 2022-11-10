/* Write a program to read and display item code and price of an item using pointer to object */
#include <iostream>
using namespace std;
class Item{
        int item_code;
        float item_price;
    public:
        void input();
        void display();
};
void Item::input(){
    cout<<"Enter Item Code: ";
    cin>>item_code;
    cout<<"Enter Item Price: Rs. ";
    cin>>item_price;
}
void Item::display(){
    cout<<"Item Code: "<<item_code<<"\nItem Price: Rs. "<<item_price<<endl;
}
int main(){
    Item X;
    Item * ptr = &X;
    ptr -> input(); // Also (*ptr).input()
    ptr -> display(); // Also (*ptr).display()  // Parentheses are important as . has higher precedence than *
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o pointer_app_2.exe .\pointer_app_2.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\pointer_app_2.exe
Enter Item Code: 12
Enter Item Price: Rs. 1244.50
Item Code: 12
Item Price: Rs. 1244.5
*/