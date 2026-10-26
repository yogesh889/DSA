#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Return the sum of all subarray minimums
    int sumSubarrayMins(vector<int>& arr) {
        long long mod = 1000000007;
        long long answer = 0;
        int n = arr.size();

        // Choose every possible starting index
        for (int start = 0; start < n; start++) {
            int currentMinimum = arr[start];

            // Extend the current subarray to the right
            for (int end = start; end < n; end++) {
                // Keep the smallest value in the range
                currentMinimum = min(currentMinimum, arr[end]);

                // Add the minimum for the current subarray
                answer = (answer + currentMinimum) % mod;
            }
        }

        // Convert the modular result to the required type
        return answer;
    }
};

// Driver code
int main() {
    vector<int> arr = {3, 1, 2, 4};
    Solution obj;
    cout << obj.sumSubarrayMins(arr) << endl;
    return 0;
}