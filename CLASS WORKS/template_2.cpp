/* Write a program using function template for bubble sort */
#include <iostream>
using namespace std;
template <class X>
void swap_numbers (X& a, X& b){
    X temp;
    temp = a;
    a = b;
    b = temp;
}
template <class T>
void bubble_sort(T arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = n-1; i < j; j--){
            if(arr[j] < arr[j-1])
                swap(arr[j], arr[j-1]);
        }
    }
}
template <class P>
void print(P arr[], int n){
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main(){
    int x[5] = {5, 4, 3, 2, 1};
    float y[5] = {0.5, 0.4, 0.3, 0.2, 0.1};
    cout<<"Before Sorting..."<<endl;
    print(x, 5);
    print(y, 5);
    bubble_sort(x, 5);
    bubble_sort(y, 5);
    cout<<"After Sorting..."<<endl;
    print(x, 5);
    print(y, 5);
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> g++ -o template_2.exe .\template_2.cpp
PS D:\Junior\Study\Object-Oriented-Programming\CLASS WORKS> .\template_2.exe
Before Sorting...
5 4 3 2 1 
0.5 0.4 0.3 0.2 0.1 
After Sorting...
1 2 3 4 5 
0.1 0.2 0.3 0.4 0.5 
*/