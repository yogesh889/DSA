#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7};
    int n = 4;
    int key = 5;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Index: " << i;
            return 0;
        }
    }

    cout << "Index: -1";

    return 0;
}