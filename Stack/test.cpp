#include<bits/stdc++.h>
using namespace std;

void monotonicIncStack(vector<int> &arr, int n){
    stack<int> st;
    for(int i=0; i<n; i++){
        while(!st.empty() && st.top()>=arr[i]){
            st.pop();
        }
        st.push(arr[i]);
    }
    cout<<"Monotonic Increasing Stack \n";
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}

void monotonicDecStack(vector<int> &arr, int n){
    stack<int> st;
    for(int i=0; i<n; i++){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        st.push(arr[i]);
    }
    cout<<"Monotonic Decreasing Stack \n";
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}

int main(){

    cout<<"Monotonic Inc, Dec Stack when iteration starts from left to right \n";
    vector<int> arr = {7, 4, 2, 0};

    int n = arr.size();

    monotonicIncStack(arr, n);
    monotonicDecStack(arr, n);

    return 0;
}