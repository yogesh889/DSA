#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 6, 8};
    int n = 4;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double avg = (double)sum / n;

    cout << "Average: " << avg;
}