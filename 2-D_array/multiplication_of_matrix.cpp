#include<iostream>
using namespace std;

int main(){

    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mat2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mat[3][3];

    int m1 = sizeof(mat1)/sizeof(mat1[0]);
    int n1 = sizeof(mat1[0])/sizeof(int);

    int m2 = sizeof(mat2)/sizeof(mat2[0]);
    int n2 = sizeof(mat2[0])/sizeof(int);

    // Initialize result matrix with 0
    for(int i=0; i<m1; i++){
        for(int j=0; j<n2; j++){
            mat[i][j] = 0;
        }
    }

    // Matrix Multiplication
    for(int i=0; i<m1; i++){

        for(int j=0; j<n2; j++){

            for(int k=0; k<n1; k++){

                mat[i][j] += mat1[i][k] * mat2[k][j];

            }
        }
    }

    // Print Result
    for(int i=0; i<m1; i++){

        for(int j=0; j<n2; j++){

            cout << mat[i][j] << " ";

        }

        cout << endl;
    }

    return 0;
}