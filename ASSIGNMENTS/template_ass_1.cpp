/* Write a function template to find maximum
and minimum element in an array of size 10 */
#include <iostream>
using namespace std;
template <class T>
void max_min(T* arr, int size){
    T max = arr[0], min = arr[0];
    for(int i = 0; i < size; i++){
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    cout<<"\tMAX: "<<max<<" , MIN: "<<min<<endl;
}
int main(){
    int arr1[10];
    cout<<"CONSTRAINT: ARRAY_SIZE = 10"<<endl;
    cout<<"Enter the integer array: ";
    for(int i = 0; i < 10; i++)
        cin>>arr1[i];
    float arr2[10];
    cout<<"Enter the float array: ";
    for(int i = 0; i < 10; i++)
        cin>>arr2[i];
    cout<<"For Integer Array..."<<endl;
    max_min(arr1, 10);
    cout<<"For Float Array..."<<endl;
    max_min(arr2, 10);
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\ASSIGNMENTS> g++ -o template_ass_1.exe .\template_ass_1.cpp
PS D:\Junior\Study\Object-Oriented-Programming\ASSIGNMENTS> .\template_ass_1.exe
CONSTRAINT: ARRAY_SIZE = 10
Enter the integer array: 3 4 7 9 10 -4 -5 0 10 -1
Enter the float array: 0.2 9.33 -7 -7.01 0 2.35 9.35 9 5.1 0.0
For Integer Array...
        MAX: 10 , MIN: -5
For Float Array...
        MAX: 9.35 , MIN: -7.01
*/