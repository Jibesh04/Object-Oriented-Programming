/* Construct a 2D array (matrix) of size mxn using constructor. Size of matrix is given
by the user. Use copy constructor to create a copied object and write required
member functions to calculate the sum of two different matrices and display their result */
#include <iostream>
#define MAX 100
using namespace std;
class Matrix{
        int row, col;
        int mat[MAX][MAX];
    public:
        Matrix(){
            row = col = 0;
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++)
                    mat[i][j] = 0;
            }
        }
        Matrix(int m, int n){row = m; col = n; input();}
        Matrix(Matrix & M){
            row = M.row;
            col = M.col;
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++)
                    mat[i][j] = M.mat[i][j];
            }
        }
        void input();
        void display();
        Matrix add(Matrix);
};
void Matrix::input(){
    cout<<"Enter the elements: \n";
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<"\tMat["<<(i+1)<<"]["<<(j+1)<<"] : ";
            cin>>mat[i][j];
        }
    }
}
void Matrix::display(){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            cout<<"\t"<<mat[i][j];
        cout<<endl;
    }
}
Matrix Matrix::add(Matrix M){
    Matrix temp;
    temp.row = row;
    temp.col = col;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
            temp.mat[i][j] = mat[i][j] + M.mat[i][j];
    }
    return temp;
}
int main(){
    int m, n;
    cout<<"Enter the number of rows and columns: ";
    cin>>m>>n;
    Matrix M1(m, n);
    Matrix M2(M1);
    cout<<"For the second matrix: \n";
    M2.input();
    Matrix M3(M1);
    M3 = M3.add(M2);
    cout<<"Matrix 1\n";
    M1.display();
    cout<<"Matrix 2\n";
    M2.display();
    cout<<"The Sum Results...\n";
    M3.display();
    return 0;
}

/* OUTPUT
Enter the number of rows and columns: 2 3
Enter the elements:
        Mat[1][1] : 1
        Mat[1][2] : 2
        Mat[1][3] : 3
        Mat[2][1] : 4
        Mat[2][2] : 5
        Mat[2][3] : 6
For the second matrix:
Enter the elements:
        Mat[1][1] : 6
        Mat[1][2] : 5
        Mat[1][3] : 4
        Mat[2][1] : 3
        Mat[2][2] : 2
        Mat[2][3] : 1
Matrix 1
        1       2       3
        4       5       6
Matrix 2
        6       5       4
        3       2       1
The Sum Results...
        7       7       7
        7       7       7
*/
