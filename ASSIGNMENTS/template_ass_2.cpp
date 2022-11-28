/* Write a function alloc() that takes two parameters: 
n which denotes the size of array to allocate and value
which denotes a value of type T. The alloc() function
should allocate an array of type T with n elements and set
all the even elements in the array to val. */
#include <iostream>
using namespace std;
template <class I>
void input(I* arr, int n){
    cout<<"Enter the elements: ";
    for(int i = 0; i < n; i++)
        cin>>arr[i];
}
template <class P>
void print(P* arr, int n){
    cout<<"The array is: ";
    for(int i = 0; i < n; i++)
        cout<<" "<<arr[i];
    cout<<endl;
}
template <class T>
void alloc(int n, T val){
    T* arr = new T[n];
    input(arr, n);
    for(int i = 1; i < n; i += 2)
        arr[i] = val;
    print(arr, n);
    delete arr;
}
int main(){
    int size;
    int val1;
    float val2;
    cout<<"For Integer array...\nEnter the size: ";
    cin>>size;
    cout<<"Enter the value at even places: ";
    cin>>val1;
    alloc(size, val1);
    cout<<"\nFor float array...\nEnter the size: ";
    cin>>size;
    cout<<"Enter the value at even places: ";
    cin>>val2;
    alloc(size, val2);
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\ASSIGNMENTS> g++ -o template_ass_2.exe .\template_ass_2.cpp
PS D:\Junior\Study\Object-Oriented-Programming\ASSIGNMENTS> .\template_ass_2.exe
For Integer array...
Enter the size: 5
Enter the value at even places: 9
Enter the elements: -1 -2 -3 0 6
The array is:  -1 9 -3 9 6

For float array...
Enter the size: 6
Enter the value at even places: 2.2
Enter the elements: 0.1 9.8 7.66 3.6 0 -1.58
The array is:  0.1 2.2 7.66 2.2 0 2.2
*/