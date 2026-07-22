#include <iostream>
#include <chrono>
using namespace std::chrono;
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {

        while (arr[i] <= pivot && i < high)
            i++;

        while (arr[j] > pivot && j > low)
            j--;

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);

        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int main() {
    int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    auto start = high_resolution_clock::now();

    quickSort(arr, 0, n - 1);

    auto end = high_resolution_clock::now();

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout<<endl;

    auto duration = duration_cast<nanoseconds>(end - start);

    cout << "Execution Time: "
         << duration.count()
         << " nanoseconds";

    return 0;
}