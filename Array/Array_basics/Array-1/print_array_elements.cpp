#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n] = {1, 2, 3, 4, 5};

    // Traverse and print elements
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}