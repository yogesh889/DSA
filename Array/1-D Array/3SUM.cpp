#include <bits/stdc++.h>
using namespace std;

int main()
{

    // vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<int> arr = {-3, -4, -2, -1, 1, 0, 1, 2};

    set<vector<int>> st;

    vector<vector<int>> output;

    sort(arr.begin(), arr.end());

    int target = 0;

    int n = arr.size();

    for (int i = 0; i < arr.size(); i++)
    {
        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == target)
            {
                st.insert({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (sum < target)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }

    for (auto triplets : st)
    {
        output.push_back(triplets);
    }

    for (auto row : output)
    {
        for (auto x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}