// 2. Find the Missing Number in Array: Given an array of size n-1 with numbers from 1 to n, find the missing number.

// Input:
// arr = [1, 2, 4, 6, 3, 7, 8]

// Output:
// Missing Number: 5

#include <iostream>
using namespace std;

int findMissing(int arr[], int n) {
    int sum = n * (n + 1) / 2;  // Expected sum
    int arrSum = 0;

    for(int i = 0; i < n - 1; i++) {
        arrSum += arr[i];
    }

    return sum - arrSum;
}

int main() {
    int arr[] = {1,2,4,6,3,7,8};
    cout << findMissing(arr, 8);
}