/* Write a program to read 2 arrays of different size given by
user and print a single sorted array (don't sort after merging) */
#include <iostream>
using namespace std;
class Array{
        int *p, *q, *r;
        unsigned int s1, s2, s3;
        void swap(int*, int*);
        void sort(int*, int);
        void merge_sort();
    public:
        void input();
        void display();
};
void Array::input(){
    cout<<"Enter size of first array: ";
    cin>>s1;
    p = new int[s1];
    int *temp = p;
    for(int i = 0; i < s1; i++){
        cout<<"Array1["<<(i+1)<<"]: ";
        cin>>(*temp);
        temp++;
    }
    cout<<"Enter size of second array: ";
    cin>>s2;
    q = new int[s2];
    temp = q;
    for(int i = 0; i < s2; i++){
        cout<<"Array2["<<(i+1)<<"]: ";
        cin>>(*temp);
        temp++;
    }
    s3 = s1 + s2;
}
void Array::swap(int* x, int* y){
    *x += *y;
    *y = *x - *y;
    *x = *x - *y;
}
void Array::sort(int* x, int s){
    int* temp = x;
    for(int i = 0; i < s-1; i++){
        for(int j = i+1; j < s; j++){
            if(*(temp + i) > *(temp + j)){
                // *(temp + i) += *(temp+j);
                // *(temp + j) = *(temp+i) - *(temp+j);
                // *(temp + i) = *(temp+i) - *(temp+j);
                swap((temp + i), (temp + j));
            }
        }
    }
}
void Array::merge_sort(){
    sort(p, s1);
    sort(q, s2);
    unsigned int count = 0;
    r = new int[s3];
    int *temp1 = r, *temp2 = p, *temp3 = q;
    while(count != s3){
        if(!*temp2 || !temp2){
            *temp1 = *temp3;
            temp3++;
        }
        else if(!*temp3 || !temp3){
            *temp1 = *temp2;
            temp2++;
        }
        else if((*temp2) < (*temp3)){
            *temp1 = *temp2;
            temp2++;
        }
        else{
            *temp1 = *temp3;
            temp3++;
        }
        count++;
        temp1++;
    }
}
void Array::display(){
    int *temp = p;
    cout<<"The Input Arrays are..."<<endl;
    for(int i = 0; i < s1; i++){
        cout<<(*temp)<<" ";
        temp++;
    }
    cout<<endl;
    temp = q;
    for(int i = 0; i < s2; i++){
        cout<<(*temp)<<" ";
        temp++;
    }
    cout<<endl;
    merge_sort();
    temp = r;
    cout<<"The Sorted Array is..."<<endl;
    for(int i = 0; i < s3; i++){
        cout<<(*temp)<<" ";
        temp++;
    }
    cout<<endl;
}
int main(){
    Array A1;
    A1.input();
    A1.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o pointer_ass3.exe .\pointer_ass3.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\pointer_ass3.exe
Enter size of first array: 3
Array1[1]: 6
Array1[2]: 4
Array1[3]: 2
Enter size of second array: 4
Array2[1]: 5
Array2[2]: 7
Array2[3]: 1
Array2[4]: 3
The Input Arrays are...
6 4 2 
5 7 1 3 
The Sorted Array is...
1 2 3 4 5 6 7
*/