#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3};
    int n = 3;
    int arr2[3];

    // Copy elements
    for(int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Print copied array
    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}