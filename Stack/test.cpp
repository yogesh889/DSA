//monotonic stack by only using elements in stack;

#include<bits/stdc++.h>
using namespace std;

vector<int> monotonicStack(vector<int> &arr, int n){
    stack<int> st; //stores only elements
    for(int i=0; i<n; i++){
        while(!st.empty() && st.top()<arr[i]){
            st.pop();
        }
        st.push(arr[i]);
    }

}

int main(){

    vector<int> arr = {2, 4, 1, 0, 9};

    int n = arr.size();

    monotonicStack(arr, n);
    
    return 0;
}