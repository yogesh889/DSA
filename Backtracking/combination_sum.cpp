#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& arr,
           int target,
           vector<int>& path,
           int index)
{
    // BASE CASE
    if(target == 0)
    {
        for(int x : path)
            cout << x << " ";

        cout << endl;
        return;
    }

    // INVALID CASE
    if(target < 0)
        return;

    // TRY ALL CHOICES
    // we will keep on adding arr[i] and subtracting it from target, index will be same here. 
    // if target < 0 after continue subtraction then we will backtrack using pop back operation and then inc. the i 
    for(int i = index; i < arr.size(); i++)
    {
        // CHOOSE
        path.push_back(arr[i]);

        // EXPLORE
        solve(arr, target - arr[i], path, i);

        // BACKTRACK (UNDO)
        path.pop_back();
    }
}

int main()
{
    vector<int> arr = {1,2,3,6,7};

    vector<int> path;

    solve(arr, 7, path, 0);

    return 0;
}