/* Construct a 2D array (matrix) of size m x n using constructor.
Size of the matrix is to be given by user. Use copy constructor to create
a copied object and write required member functions to calculate the sum 
of two different matrices and display their result. */
#include <iostream>
#define MAX 100
using namespace std;
class Matrix{
        static int count;
        int row, col;
        int mat[MAX][MAX];
    public:
        Matrix(){
            cout<<"Enter number of rows: ";
            cin>>row;
            cout<<"Enter number of columns: ";
            cin>>col;
            cout<<"Enter elements of Matrix "<<++count<<endl;
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    cout<<"\tMat["<<i<<"]["<<j<<"] : ";
                    cin>>mat[i][j];
                }
            }
        }
        Matrix(Matrix &M){
            row = M.row;
            col = M.col;
        }
        Matrix(Matrix &M1, Matrix &M2){
            row = M1.row;
            col = M1.col;
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    mat[i][j] = M1.mat[i][j] + M2.mat[i][j];
                }
            }
        }
        void input();
        friend void sum(Matrix, Matrix, Matrix);
        void display();
};
int Matrix::count;
void Matrix::input(){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<"\tMat["<<i<<"]["<<j<<"] : ";
            cin>>mat[i][j];
        }
    }
}
void Matrix::display(){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<"\t"<<mat[i][j];
        }
        cout<<endl;
    }
}
int main(){
    Matrix M1;
    Matrix M2(M1);
    cout<<"Enter elements of Matrix 2"<<endl;
    M2.input();
    Matrix M3(M1, M2);
    cout<<"Matrix 1"<<endl;
    M1.display();
    cout<<"Matrix 2"<<endl;
    M2.display();
    cout<<"The sum results..."<<endl;
    M3.display();
    return 0;
}

/* TERMINAL
PS D:\Junior\Study\Object-Oriented-Programming> g++ -o Ass10_Matrix.exe .\Ass10_Matrix.cpp
PS D:\Junior\Study\Object-Oriented-Programming> .\Ass10_Matrix.exe
Enter number of rows: 2
Enter number of columns: 3
Enter elements of Matrix 1
        Mat[0][0] : 21
        Mat[0][1] : 44
        Mat[0][2] : 2
        Mat[1][0] : 13
        Mat[1][1] : 9
        Mat[1][2] : 54
Enter elements of Matrix 2
        Mat[0][0] : 8
        Mat[0][1] : 10
        Mat[0][2] : 68
        Mat[1][0] : 47
        Mat[1][1] : 11
        Mat[1][2] : 2
Matrix 1
        21      44      2
        13      9       54
Matrix 2
        8       10      68
        47      11      2
The sum results...
        29      54      70
        60      20      56
*/