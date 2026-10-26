#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Previous Greater Element
vector<int> previousGreaterElement(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st; // Stores indices

    for (int i = 0; i < n; i++)
    {
        // Remove elements smaller than or equal to current
        while (!st.empty() && arr[st.top()] <= arr[i])
        {
            st.pop();
        }

        // Previous Greater Element
        if (!st.empty())
        {
            ans[i] = arr[st.top()];
        }

        st.push(i);
    }

    return ans;
}

// Previous Smaller Element
vector<int> previousSmallerElement(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st; // Stores indices

    for (int i = 0; i < n; i++)
    {
        // Remove elements greater than or equal to current
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }

        // Previous Smaller Element
        if (!st.empty())
        {
            ans[i] = arr[st.top()];
        }

        st.push(i);
    }

    return ans;
    
}

int main()
{
    vector<int> arr = {2, 1, 5, 3, 4};

    vector<int> pge = previousGreaterElement(arr);
    vector<int> pse = previousSmallerElement(arr);

    cout << "Previous Greater Elements: ";
    for (int x : pge)
    {
        cout << x << " ";
    }

    cout << "\nPrevious Smaller Elements: ";
    for (int x : pse)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
