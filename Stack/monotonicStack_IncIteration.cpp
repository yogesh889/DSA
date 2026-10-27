#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr){
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st; // Stores elements only
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() < arr[i])
        {
            int element = st.top();
            st.pop();

            // Find the index of this element
            // to store its answer
            for (int j = i - 1; j >= 0; j--)
            {
                if (arr[j] == element && ans[j] == -1)
                {
                    ans[j] = arr[i];
                    break;
                }
            }
        }
        st.push(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 5, 3, 4};

    vector<int> ans = nextGreaterElement(arr);

    for (int x : ans)
        cout << x << " ";

    return 0;
}
