#include <iostream>
using namespace std;

// Function to print subset
void printSubset(int subset[], int size)
{
    cout << "{ ";

    for(int i = 0; i < size; i++)
    {
        cout << subset[i] << " ";
    }

    cout << "}" << endl;
}

// Backtracking function
void printSubsets(int arr[],
                  int n,
                  int subset[],
                  int subsetSize,
                  int index)
{
    // Base Case
    if(index == n)
    {
        printSubset(subset, subsetSize);
        return;
    }

    // -------------------------
    // INCLUDE current element
    // -------------------------

    subset[subsetSize] = arr[index];

    printSubsets(arr,
                 n,
                 subset,
                 subsetSize + 1,
                 index + 1);

    // -------------------------
    // EXCLUDE current element
    // -------------------------

    printSubsets(arr,
                 n,
                 subset,
                 subsetSize,
                 index + 1);
}

int main()
{
    int arr[] = {1, 2, 3};

    int n = 3;

    // Temporary array to store subset
    int subset[100];

    printSubsets(arr, n, subset, 0, 0); // actual array, array size, subset array, subset size, index 

    return 0;
}


// #include <iostream>
// #include <vector>
// using namespace std;

// void printSubsets(vector<int>& arr,
//                   vector<int>& subset,
//                   int i)
// {
//     // Base Case
//     if(i == arr.size())
//     {
//         cout << "{ ";

//         for(int x : subset)
//         {
//             cout << x << " ";
//         }

//         cout << "}" << endl;
//         return;
//     }

//     // Include
//     subset.push_back(arr[i]);

//     printSubsets(arr, subset, i + 1);

//     // Backtrack
//     subset.pop_back();

//     // Exclude
//     printSubsets(arr, subset, i + 1);
// }

// int main()
// {
//     vector<int> arr = {1,2,3};
//     vector<int> subset;

//     printSubsets(arr, subset, 0);
// }
