#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElementI(vector<int> &arr, int n){
    vector<int> ans(n, -1);
    stack<int> st;
    for(int i=n-1; i>=0; i--){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(!st.empty()){
            ans[i] = st.top();
        }
        st.push(i);
    }
    return ans;
}

int main(){

    vector<int> arr = {3, 5, 9, 1, 0};

    int n = arr.size();

    vector<int> ans = nextGreaterElementI(arr, n);

    for(int x: ans){
        cout<<x<<" ";
    }

    return 0;
}