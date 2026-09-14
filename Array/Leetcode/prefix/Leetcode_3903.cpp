#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        SmallestStableIndex(vector<int> &nums, int k){
            int n = nums.size();
            vector<int> right(n);
            right[n-1] = nums[n-1];

            for(int i=n-2; i>=0; i--){
                right[i] = min(nums[i], right[i+1]);
            }
            int left = nums[0];
            for(int i=0; i<n; i++){
                left = max(left, nums[i]);
                if(left - right[i] <= k){
                    return i;
                }
            }
            return -1;
        }
};

int main(){
    Solution obj;

    vector<int> nums = {5, 0, 1, 4};

    int k = 3;

    cout<<obj.SmallestStableIndex(nums, k);

    return 0;
}