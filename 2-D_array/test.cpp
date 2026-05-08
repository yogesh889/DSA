#include<iostream>
using namespace std;

int* print_diagonal_element(int **arr, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(i == j || i+j == 4){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

int main(){


    // int arr[5][5] = {
    //     {1, 2, 3, 4, 5},
    //     {4, 23, 2, 5, 4},
    //     {3, 34, 5, 5, 2},
    //     {5, 4, 32, 12, 54},
    //     {34, 34, 112, 12, 1}
    // };

    // int* arr = new int[3]{1, 2, 3};

    int rows = 3;
    int cols = 3;

    // Allocate

    int **arr = new int*[rows];

    for(int i=0; i<rows; i++){
        arr[i] = new int[cols];
    }

    // int** arr = new int*[3]{{1, 2, 3}};

    int m = sizeof(arr[0])/sizeof(int);
    int n = sizeof(arr)/sizeof(arr[0]);

    print_diagonal_element(arr, m, n);

    return 0;
}