#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &num1, vector<int> &num2){
    vector<int> ans;
    int n = num2.size();
    unordered_map<int, int> mp;
    stack<int> st;

    for(int n: num2){
        while(!st.empty() && st.top()<n){
            mp[st.top()] = n;
            st.pop(); 
        }
        st.push(n);
    }
    while(!st.empty()){
        mp[st.top()] = -1;
        st.pop();
    }

    for(int n: num1){
        ans.push_back(mp[n]);
    }
    return ans;
}

int main(){

    vector<int> num1 = {4, 1, 2};
    vector<int> num2 = {1, 3, 4, 2};

    vector<int> ans = nextGreaterElement(num1, num2);

    for(int a: ans){
        cout<<a<<" ";
    }

    return 0;
}