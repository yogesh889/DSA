#include<iostream>
using namespace std;

int main() {

    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    int m = sizeof(arr[0]) / sizeof(int);   // columns
    int n = sizeof(arr) / sizeof(arr[0]);   // rows

    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;

    while (left <= right && top <= bottom) {

        // Top row
        for (int i = left; i <= right; i++)
            cout << arr[top][i] << " ";
        top++;

        // Right column
        for (int i = top; i <= bottom; i++)
            cout << arr[i][right] << " ";
        right--;

        // Bottom row
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                cout << arr[bottom][i] << " ";
            bottom--;
        }

        // Left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout << arr[i][left] << " ";
            left++;
        }
    }

    return 0;
}