#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void permutation(int arr[], int start, int end)
{
    // Base Condition
    if(start == end)
    {
        printArray(arr, end + 1);
        return;
    }

    // Recursive Part
    for(int i = start; i <= end; i++)
    {
        // Step 1: swap
        swap(arr[start], arr[i]);

        // Step 2: recursive call
        permutation(arr, start + 1, end);

        // Step 3: backtrack (undo swap)
        swap(arr[start], arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;

    permutation(arr, 0, n - 1);

    return 0;
}