#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15};
    int n = 3, sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum: " << sum;
}