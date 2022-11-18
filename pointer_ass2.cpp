/* Write a program to searchan element in an array and
find the number of occurences using pointer. */
#include <iostream>
using namespace std;
class Array{
        unsigned int size;
        int *p;
    public:
        void input();
        void display();
        void freq();
};
void Array::input(){
    cout<<"Enter size: ";
    cin>>size;
    p = new int[size];
    int *temp = p;
    for(int i = 0; i < size; i++){
        cout<<"Array["<<(i+1)<<"]: ";
        cin>>(*temp);
        temp++;
    }
}
void Array::display(){
    int *temp = p;
    cout<<"The Input Array is..."<<endl;
    for(int i = 0; i < size; i++){
        cout<<(*temp)<<" ";
        temp++;
    }
    cout<<endl;
}
void Array::freq(){
    int x;
    cout<<"Enter the element to be searched: ";
    cin>>x;
    int *temp = p;
    int count = 0;
    for(int i = 0; i < size; i++){
        if((*temp) == x)
            count++;
        temp++;
    }
    cout<<x<<" was found "<<count<<" time(s)"<<endl;
}
int main(){
    Array A1;
    A1.input();
    A1.display();
    A1.freq();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> git commit -m"Pointer Assignment 1"
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o pointer_ass2.exe .\pointer_ass2.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\pointer_ass2.exe
Enter size: 5
Array[1]: 2
Array[2]: 0
Array[3]: 2
Array[4]: 8
Array[5]: 2
The Input Array is...
2 0 2 88 2 
Enter the element to be searched: 2
2 was found 3 time(s)
*/