#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    // Reverse using swapping
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Print reversed array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}