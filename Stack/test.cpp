//monotonic stack by only using elements in stack;

#include<bits/stdc++.h>
using namespace std;

vector<int> monotonicIncStack(vector<int> &arr, int n){
    stack<int> st;
    for(int i=0; i<n; i++){
        while(!st.empty() && st.top()<= arr[i]){
            st.pop();
        }
        st.push(arr[i]);
    }
    return st;
}

int main(){

    vector<int> arr = {2, 4, 1, 0, 9};

    int n = arr.size();

    stack<int> ans = monotonicIncStack(arr, n);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}