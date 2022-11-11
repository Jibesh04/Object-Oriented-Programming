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
    cout<<"Book Title: "<<title<<"\nPrice: Rs. "<<price<<"\nPages: "<<pages<<endl;
}
