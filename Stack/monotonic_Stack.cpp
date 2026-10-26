#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int> &arr)
{
    int n = arr.size();

    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {

        // Remove elements that cannot be the answer
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }

        // The remaining top is the next greater element
        if (!st.empty())
        {
            ans[i] = st.top();
        }

        // Current element becomes a candidate
        st.push(arr[i]);
    }

    return ans;
}

vector<int> nextSmallerElement(vector<int> &arr)
{
    int n = arr.size();

    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--)
    {

        // Remove elements that cannot be the answer
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }

        // Remaining top is the next smaller element
        if (!st.empty())
        {
            ans[i] = st.top();
        }

        // Push current element
        st.push(arr[i]);
    }

    return ans;
    
}

int main()
{
    vector<int> arr = {2, 1, 5, 3, 4};

    vector<int> ans1 = nextGreaterElement(arr);
    vector<int> ans2 = nextSmallerElement(arr);

    for (int x : ans1)
    {
        cout << x << " ";
    }

    cout<<endl;

    for (int x : ans2)
    {
        cout << x << " ";
    }

    return 0;
}