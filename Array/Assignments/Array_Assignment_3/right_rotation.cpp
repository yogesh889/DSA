// 5. Array Rotation (Right): Write a program to rotate the elements of an array by k positions to the right.

// Input: arr = [1, 2, 3, 4, 5], k = 2 	
// Output: 4 5 1 2 3

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = 5, k = 2;

//     k = k % n; // handle large k

//     for(int i = 0; i < k; i++) {
//         int last = arr[n-1];

//         for(int j = n-1; j > 0; j--)
//             arr[j] = arr[j-1];

//         arr[0] = last;
//     }

//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }



#include<iostream>
using namespace std;

int main(){

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 4;
    int temp[4] = {0};

    for(int i=0; i<n-k; i++){
        temp[i] = arr[i];
    }

    for(int i=0; i<k; i++){
        arr[i] = arr[n-k+i];
    }

    for(int i=k; i<n; i++){
        arr[i] = temp[i-k];
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}