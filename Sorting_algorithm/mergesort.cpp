#include<bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    int temp[right - left + 1];

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // remaining elements
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // copy back to original array
    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left)/2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main() {
    int arr[] = {6, 3, 9, 5, 2, 8, 3, 5, 12 , 3, 56, 65, 45, 7, 6, 8, 9, 3, 34, 43, 23, 53};
    int n = sizeof(arr) / sizeof(arr[0]);

    auto start = high_resolution_clock::now();

    mergeSort(arr, 0, n - 1);

    auto end = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(end - start);

    cout << "Execution Time: "<< duration.count()<< " nanoseconds";

    cout<<endl;

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}