#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 9, 11, 2};
    int n = 4, key = 11;
    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Yes";
    else
        cout << "No";
}