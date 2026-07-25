#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;


int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void QuickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);

        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {2,1,7,9,0,5,3};

    int n = sizeof(arr)/sizeof(arr[0]);

    auto start = high_resolution_clock::now();
    QuickSort(arr, 0, n - 1);
    auto end = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(end - start);

    cout << "Sorted array:\n";

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";


    cout << "Execution Time: "<< duration.count()<< " microseconds";
}