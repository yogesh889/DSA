#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, 6, 3, 1, 9};
    int n = 5;

    int min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Smallest: " << min;
}