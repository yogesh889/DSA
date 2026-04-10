

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,1,2,1};
    int n = 6, target = 1, count = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target)
            count++;
    }

    cout << count;
}