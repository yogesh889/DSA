#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        const long long MOD = 1000000007;

        vector<int> left(n), right(n);
        stack<int> st;

        // Previous strictly smaller element
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            left[i] = st.empty() ? i + 1 : i - st.top();
            st.push(i);
        }

        // Clear stack before second traversal
        while (!st.empty()) {
            st.pop();
        }

        // Next smaller or equal element
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            right[i] = st.empty() ? n - i : st.top() - i;
            st.push(i);
        }

        long long ans = 0;

        // Calculate each element's contribution
        for (int i = 0; i < n; i++) {
            long long contribution =
                (1LL * arr[i] * left[i] % MOD) * right[i] % MOD;

            ans = (ans + contribution) % MOD;
        }

        return (int)ans;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sum of Subarray Minimums: " << sol.sumSubarrayMins(arr) << endl;

    return 0;
}
