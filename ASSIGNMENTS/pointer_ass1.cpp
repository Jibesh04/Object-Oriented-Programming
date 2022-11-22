/* Write a program to read an array of size 10 and print the pair of
elements that result to a sum of given input 'x', using pointers */
#include <iostream>
using namespace std;
class Array{
        int arr[10];
    public:
        Array(){
            for(int i = 0; i < 10; i++)
                arr[i] = 0;
        }
        Array(int x[]){
            for(int i = 0; i < 10; i++)
                arr[i] = x[i];
        }
        ~Array(){}
        void input();
        void display();
        void sum_check();
};
void Array::input(){
    int *p = arr;
    cout<<"Enter the elements: "<<endl;
    for(int i = 0; i < 10; i++){
        cin>>(*p);
        p++;
    }
}
void Array::display(){
    int *p = arr;
    cout<<"The Input Array is..."<<endl;
    for(int i = 0; i < 10; i++){
        cout<<(*p)<<" ";
        p++;
    }
    cout<<endl;
}
void Array::sum_check(){
    int sum;
    cout<<"Enter the sum: ";
    cin>>sum;
    int *p = arr;
    for(int i = 0; i < 9; i++){
        for(int j = i+1; j < 10; j++){
            if(*(p+i) + *(p+j) == sum)
                cout<<*(p+i)<<" "<<*(p+j)<<endl;
            p++;
        }
    }
}
int main(){
    Array A1;
    A1.input();
    A1.display();
    A1.sum_check();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o pointer_ass1.exe .\pointer_ass1.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\pointer_ass1.exe
Enter the elements: 
2 3 1 4 5 0 8 1 3 4
The Input Array is...
2 3 1 4 5 0 8 1 3 4 
Enter the sum: 5
2 3
4 1
1 4
*/