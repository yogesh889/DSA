#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {2, 1, 0, 4, 5};

    stack<int> st;

    int n = arr.size();

    for(int i=0; i<n; i++){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        st.push(arr[i]);
    }

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}