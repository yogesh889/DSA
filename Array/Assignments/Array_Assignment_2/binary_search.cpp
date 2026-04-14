#include <iostream>
using namespace std;

// void binary_search(int* arr, int n, int key){
//     int left = 0;
//     int right = n-1;

//     while(left <= right){
//         int mid = (left+right)/2;
//         if(arr[mid] == key){
//             cout<<mid;
//             break;
//         }
//         if(arr[mid] < key){
//             right = mid + 1;
//         }
//         if(arr[mid] > key){
//             left = mid-1;
//         }
//     }

// }

int main() {
    int arr[] = {2,5,9,11}; // sorted
    int n = 4, key = 11;

    int left = 0, right = n - 1;
    bool found = false;

    while(left <= right) {
        int mid = (left + right) / 2;

        if(arr[mid] == key) {
            cout<<arr[mid]<<endl;
            break;
        }
        else if(arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    // cout << (found ? "Yes" : "No");

    // binary_search(arr, n, key);

    return 0;
}