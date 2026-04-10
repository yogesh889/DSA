#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 8, 5, 2, 1, 4};
    int n = 6;

    int result[6], index = 0;

    // Even first
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0){
            result[index] = arr[i];
            index++;
        }
    }

    // Then odd
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0){
            result[index] = arr[i];
            index++;
        }
    }

    for(int i = 0; i < n; i++)
        cout << result[i] << " ";
}