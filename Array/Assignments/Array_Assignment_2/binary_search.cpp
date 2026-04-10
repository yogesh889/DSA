#include <iostream>
using namespace std;

int main() {
    int arr[] = {2,5,9,11}; // sorted
    int n = 4, key = 11;

    int left = 0, right = n - 1;
    bool found = false;

    while(left <= right) {
        int mid = (left + right) / 2;

        if(arr[mid] == key) {
            found = true;
            break;
        }
        else if(arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    cout << (found ? "Yes" : "No");
}