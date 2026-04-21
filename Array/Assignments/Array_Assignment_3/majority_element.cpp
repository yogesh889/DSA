#include <iostream>
using namespace std;

int findMajority(int arr[], int n) {
    int candidate = -1;
    int count = 0;

    // Step 1: Find candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        }
        else if (arr[i] == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    }

    return -1; // no majority
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 3, 3, 4, 5, 5, 5, 5};
    int n = 12;

    int result = findMajority(arr, n);

    if (result != -1) {
        cout << "Majority Element: " << result;
    } else {
        cout << "No Majority Element";
    }

    return 0;
}