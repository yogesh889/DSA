#include <iostream>
using namespace std;

void printSubset(int subset[], int size)
{
    cout << "{ ";

    for(int i = 0; i < size; i++)
    {
        cout << subset[i] << " ";
    }

    cout << "}" << endl;
}

void solve(int nums[],
           int n,
           int subset[],
           int subsetSize,
           int i)
{
    // Base Case
    if(i == n)
    {
        printSubset(subset, subsetSize);
        return;
    }

    // -------------------
    // INCLUDE CURRENT ELEMENT
    // -------------------

    subset[subsetSize] = nums[i];

    solve(nums,
          n,
          subset,
          subsetSize + 1,
          i + 1);

    // -------------------
    // SKIP DUPLICATES
    // -------------------

    int index = i + 1;

    while(index < n &&
          nums[index] == nums[index - 1])
    {
        index++;
    }

    // -------------------
    // EXCLUDE CURRENT ELEMENT
    // -------------------

    solve(nums,
          n,
          subset,
          subsetSize,
          index);
}

int main()
{
    int nums[] = {1, 2, 2};

    int n = 3;

    // Since array already sorted
    // otherwise use manual sorting

    int subset[100];

    solve(nums, n, subset, 0, 0);

    return 0;
}