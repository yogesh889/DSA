// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "([])";

    stack<char> st;

    for(char c: s){
        if(c=='(' || c=='[' || c=='{'){
            st.push(c);
            cout<<c<<" ";
        }
        else{

            if(st.empty())
                cout<<false<<endl;

            if(c==')' && st.top()!='(')
                cout<<false<<endl;

            if(c==']' && st.top()!='[')
                cout<<false<<endl;

            if(c=='}' && st.top()!='{')
                cout<<false<<endl;

            cout<<c<<" ";
            st.pop();
        }
    }

    return 0;
}