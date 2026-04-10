#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7};
    int n = 4, key = 5;
    int index = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            index = i;
            break;
        }
    }

    cout << "Index: " << index;
}