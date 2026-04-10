#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3};
    int n = 3;
    int arr2[3];

    for(int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    for(int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
}