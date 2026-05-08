#include<iostream>
using namespace std;

int main() {

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);

    // Top row
    for(int i = 0; i < cols; i++)
        cout << arr[0][i] << " ";

    // Right column
    for(int i = 1; i < rows; i++)
        cout << arr[i][cols - 1] << " ";

    // Bottom row (only if more than 1 row)
    if(rows > 1) {
        for(int i = cols - 2; i >= 0; i--)
            cout << arr[rows - 1][i] << " ";
    }

    // Left column (only if more than 1 column)
    if(cols > 1) {
        for(int i = rows - 2; i > 0; i--)
            cout << arr[i][0] << " ";
    }

    return 0;
}