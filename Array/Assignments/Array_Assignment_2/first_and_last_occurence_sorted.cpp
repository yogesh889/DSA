#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,2,3,4};
    int n = 6, target = 2;

    int first = -1, last = -1;

    // First occurrence
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            first = i;
            break;
        }
    }

    // Last occurrence
    for(int i = n-1; i >= 0; i--) {
        if(arr[i] == target) {
            last = i;
            break;
        }
    }

    cout << "First = " << first << ", Last = " << last;
}