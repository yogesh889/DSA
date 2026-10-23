#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr) {
    int n = arr.size();

    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {

        // Remove elements that cannot be the answer
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        // The remaining top is the next greater element
        if (!st.empty()) {
            ans[i] = st.top();
        }

        // Current element becomes a candidate
        st.push(arr[i]);
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 1, 5, 3, 4};

    vector<int> ans = nextGreaterElement(arr);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}