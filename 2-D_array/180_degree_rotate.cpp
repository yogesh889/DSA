#include<iostream>
using namespace std;

int main(){

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;

    // Rotate layer by layer
    for(int i = 0; i < n / 2; i++){

        // Traverse elements in current layer
        for(int j = i; j < n - i - 1; j++){

            // Store top element
            int temp = arr[i][j];

            // Left -> Top
            arr[i][j] = arr[n-1-j][i];

            // Bottom -> Left
            arr[n-1-j][i] = arr[n-1-i][n-1-j];

            // Right -> Bottom
            arr[n-1-i][n-1-j] = arr[j][n-1-i];

            // Top -> Right
            arr[j][n-1-i] = temp;
        }
    }

    // Print rotated matrix
    cout << "90 Degree Clockwise Rotation:\n";

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}