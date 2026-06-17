#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;      // stores indices
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {

            // Remove indices that are out of the current window
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Maintain decreasing deque
            while (!dq.empty() && nums[dq.back()] <= nums[i]) {
                dq.pop_back();
            }

            dq.push_back(i);

            // First window formed
            if (i >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = obj.maxSlidingWindow(nums, k);

    cout << "Sliding Window Maximums: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

// | i | nums[i] | Remove Out of Window     | Remove Smaller Elements      | Deque (Indices) | Deque (Values) | Output Added |
// | - | ------- | ------------------------ | ---------------------------- | --------------- | -------------- | ------------ |
// | 0 | 1       | None                     | None                         | [0]             | [1]            | -            |
// | 1 | 3       | None                     | Remove 0 (1 ≤ 3)             | [1]             | [3]            | -            |
// | 2 | -1      | None                     | None                         | [1,2]           | [3,-1]         | 3            |
// | 3 | -3      | None                     | None                         | [1,2,3]         | [3,-1,-3]      | 3            |
// | 4 | 5       | Remove 1 (out of window) | Remove 3 (-3), Remove 2 (-1) | [4]             | [5]            | 5            |
// | 5 | 3       | None                     | None                         | [4,5]           | [5,3]          | 5            |
// | 6 | 6       | None                     | Remove 5 (3), Remove 4 (5)   | [6]             | [6]            | 6            |
// | 7 | 7       | None                     | Remove 6 (6)                 | [7]             | [7]            | 7            |
