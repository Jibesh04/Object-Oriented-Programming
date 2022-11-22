/* Create a class media (abstract base class) having data members
title and price and a member function display. Derive a class book
from media having data member pages, and a class tape having data
member play time
Write a program to read and display the values */
#include <iostream>
using namespace std;
class Media{
    public:
        char title[30];
        float price;
        virtual void input() = 0;
        virtual void display() = 0;
};
int i = 0;
class Book:public Media{
        int pages;
    public:
        void input();
        void display();
};
void Book::input(){
    cout<<"Enter the title: ";
    if(i>0)
        fgets(title, 30, stdin);
    fgets(title, 30, stdin);
    i++;
    cout<<"Enter Price: Rs. ";
    cin>>price;
    cout<<"No. of Pages: ";
    cin>>pages;
}
void Book::display(){
    cout<<"Book Title: "<<title<<"Price: Rs. "<<price<<"\nPages: "<<pages<<endl;
}
class Tape:public Media{
        float play_time;
    public:
        void input();
        void display();
};
void Tape::input(){
    cout<<"Enter the title: ";
    if(i>0)
        fgets(title, 30, stdin);
    fgets(title, 30, stdin);
    i++;
    cout<<"Enter Price: Rs. ";
    cin>>price;
    cout<<"Play Time (seconds): ";
    cin>>play_time;
}
void Tape::display(){
    cout<<"Tape Title: "<<title<<"Price: Rs. "<<price<<"\nPlay Time: "<<play_time<<" s\n";
}
int main(){
    Media *ptr;
    cout<<"For Book...\n";
    Book b1;
    ptr = &b1;
    ptr -> input();
    ptr -> display();
    cout<<"For Tape...\n";
    Tape t1;
    ptr = &t1;
    ptr -> input();
    ptr -> display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o pure_virtual_function.exe .\pure_virtual_function.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\pure_virtual_function.exe
For Book...
Enter the title: The New Beginning
Enter Price: Rs. 2355
No. of Pages: 1205
Book Title: The New Beginning
Price: Rs. 2355
Pages: 1205
For Tape...
Enter the title: Hello, World! 
Enter Price: Rs. 230 
Play Time (seconds): 9999.5
Tape Title: Hello, World!
Price: Rs. 230
Play Time: 9999.5 s
*/