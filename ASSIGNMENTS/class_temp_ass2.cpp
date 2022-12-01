/* Write a class template to find smallest element in an array of 10 elements */
#include <iostream>
using namespace std;
template<class T, int size = 10>
class Array{
        T arr[size];
        T min(){
            T minimum = arr[0];
            for(int i = 1; i < size; i++){
                if(arr[i] < minimum)
                    minimum = arr[i];
            }
            return minimum;
        }
    public:
        void input(){
            cout<<"Enter the elements: ";
            for(int i = 0; i < size; i++)
                cin>>arr[i];
        }
        void display(){
            cout<<"The array is: ";
            for(int i = 0; i < size; i++)
                cout<<" "<<arr[i];
            cout<<endl;
            cout<<"The minimum element is: "<<min()<<endl;
        }
};
int main(){
    cout<<"CONSTRAINTS: ARRAY_SIZE = 10"<<endl;
    Array <int> A1;
    Array <float> A2;
    cout<<"For Integer Array...\n";
    A1.input();
    A1.display();
    cout<<"For Float Array...\n";
    A2.input();
    A2.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming\ASSIGNMENTS> g++ -o class_temp_ass2.exe ./class_temp_ass2.cpp
PS D:\Junior\Study\Object-Oriented-Programming\ASSIGNMENTS> ./class_temp_ass2.exe
CONSTRAINTS: ARRAY_SIZE = 10
For Integer Array...
Enter the elements: 3 5 1 0 9 -3 -9 5 7 30
The array is:  3 5 1 0 9 -3 -9 5 7 30
The minimum element is: -9
For Float Array...
Enter the elements: 1.1 2.2 3.01 -3.01 -3.011 4.67 0.0 0 .6 4.5
The array is:  1.1 2.2 3.01 -3.01 -3.011 4.67 0 0 0.6 4.5
The minimum element is: -3.011
*/