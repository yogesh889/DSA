// For LeetCode 26 — Remove Duplicates from Sorted Array, the easiest way is the two-pointer approach.
#include<bits/stdc++.h>
using namespace std;

int main(){

    int j = 1;

    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    
    for(int i=1; i<nums.size(); i++){
        if(nums[i] != nums[i-1]){
            nums[j] = nums[i];
            j++;
        }
    }

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }

    return 0;
}