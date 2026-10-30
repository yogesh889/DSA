#include <iostream>
#include <vector>
#include <stack>
using namespace std;


vector<int> nextGreaterElement(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st; // Stores indices

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            ans[i] = st.top();
            // ans[i] = arr[st.top()]; // Return element
        }

        st.push(arr[i]);
    }

    return ans;
}

vector<int> nextSmallerElement(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st; // Stores indices

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            ans[i] = arr[st.top()]; // Return element
        }

        st.push(i);
    }

    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 5, 3, 4};

    vector<int> ans1 = nextGreaterElement(arr);
    vector<int> ans2 = nextSmallerElement(arr);

    cout << "Next Greater Elements: ";
    for (int x : ans1)
        cout << x << " ";

    cout << "\nNext Smaller Elements: ";
    for (int x : ans2)
        cout << x << " ";

    return 0;
}
