#include <iostream>
using namespace std;
class Array{
        int arr[10];
        int sum(){
            int sum_val = 0;
            int * ptr = arr;
            for(int i = 0; i < 10; i++){
                if((*ptr) % 2 == 0)
                    sum_val += (*ptr);
                ptr++;
            }
            return sum_val;
        }
    public:
        void input(){
            cout<<"Enter the 10 elements: ";
            for(int i = 0; i < 10; i++)
                cin>>arr[i];
        }
        void display(){
            cout<<"The array is:\n";
            for(int i = 0; i < 10; i++)
                cout<<"\t"<<arr[i];
            cout<<"\nThe sum of even numbers results: "<<sum()<<endl;
        }
};
int main(){
    Array A1;
    A1.input();
    A1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o pointer_app_1.exe .\pointer_app_1.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\pointer_app_1.exe
Enter the 10 elements: 1 1 1 1 1 3 3 3 3 5
The array is:
        1       1       1       1       1       3       3       3       3       5
The sum of even numbers results: 0
PS D:\Junior\Study\Object-Oriented-Programming> .\pointer_app_1.exe
Enter the 10 elements: 1 2 3 4 5 6 7 8 9 0
The array is:
        1       2       3       4       5       6       7       8       9       0
The sum of even numbers results: 20
*/