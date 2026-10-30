#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums, int n){
    stack<int> st;
    vector<int> ans(n);

    for(int i=2*n-1; i>=0; i--){
        while(!st.empty() && st.top() <= nums[i%n]){
            st.pop();
        }
        if(i<n){
            ans[i] = st.empty() ? -1 : st.top();
        }
        st.push(nums[i%n]);
    }
    return ans;
}

int main(){

    vector<int> nums = {1, 2, 1};
    int n = nums.size();

    vector<int> ans = nextGreaterElement(nums, n);

    for(int a: ans){
        cout<<a<<" ";
    }

    return 0;
}