#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15};
    int n = 3;
    int sum = 0;

    // Add all elements
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum: " << sum;

    return 0;
}