#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 3, 4, 3};
    int n = 5;
    int key = 3;
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    cout << "Occurrences of " << key << ": " << count;

    return 0;
}