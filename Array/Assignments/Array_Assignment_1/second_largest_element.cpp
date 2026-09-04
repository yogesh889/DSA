#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {10, 5, 8, 20, 15};

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int x : arr) {
        if (x > largest) {
            secondLargest = largest;
            largest = x;
        }
        else if (x > secondLargest && x != largest) {
            secondLargest = x;
        }
    }

    cout << secondLargest;

    return 0;
}