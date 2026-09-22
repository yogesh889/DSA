#include <iostream>
using namespace std;

void solve(int arr[], int index, int n)
{
    // Base case
    if(index == n)
        return;

    // Going DOWN the recursion stack
    arr[index] = 1;

    cout<<arr[index]<<" ";

    solve(arr, index + 1, n);

    // Backtracking / coming UP
    arr[index] = 2;
    
    cout<<arr[index]<<" ";
}

int main()
{
    int arr[5] = {0, 0, 0, 0, 0};

    solve(arr, 0, 5);

    return 0;
}