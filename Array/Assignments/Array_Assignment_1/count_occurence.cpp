#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 3, 4, 3};
    int n = 5, key = 3, count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    cout << "Occurrences of " << key << ": " << count;
}