#include <iostream>
#include <vector>
#include <thread>

using namespace std;

void merge(vector<int>& arr, int low, int mid, int high)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    // Compare elements from both halves
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left half
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right half
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy sorted elements back into original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}


void parallelMergeSort(vector<int>& arr, int low, int high)
{
    if (low >= high)
        return;

    int mid = low + (high - low) / 2;

    // Create threads for left and right halves
    thread leftThread(parallelMergeSort, ref(arr), low, mid);

    thread rightThread(parallelMergeSort, ref(arr), mid + 1, high);

    // Wait for both threads to finish
    leftThread.join();
    rightThread.join();

    // Both halves are now sorted
    merge(arr, low, mid, high);
}


int main()
{
    vector<int> arr = {8, 4, 2, 6, 1, 5, 7, 3};

    parallelMergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";

    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}