/* Write a program to open a file ITEM and enter the item name
and price and display it */
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream outfile("ITEM");
    cout<<"Enter Item Name: ";
    string name;
    cin>>name;
    outfile<<name<<endl;
    cout<<"Enter Item Price: Rs. ";
    float price;
    cin>>price;
    outfile<<price<<endl;
    outfile.close();
    ifstream infile("ITEM");
    infile>>name;
    cout<<"Item Name: "<<name<<endl;
    infile>>price;
    cout<<"Item Price: Rs. "<<price<<endl;
    infile.close();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o .\file_handling.exe .\file_handling.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> .\file_handling.exe
Enter Item Name: Item_Name
Enter Item Price: Rs. 999
Item Name: Item_Name
Item Price: Rs. 999
*/