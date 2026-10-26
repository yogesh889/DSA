#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int> st;
    stack<int> st2;

    st2.push(12);
    st2.push(13);
    st2.push(14);
    st2.push(15);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<endl; //5
    cout<<st.top()<<endl; //50
    st.pop(); //remove top element 50
    cout<<st.top()<<endl; //40

    cout<<st.empty()<<endl; //0
    cout<<st.size()<<endl; //4

    cout<<"After swaping st with st2 \n";
    st.swap(st2);
    cout<<st.top()<<endl;

    st.emplace(45);
    cout<<st.top();

    return 0;
}