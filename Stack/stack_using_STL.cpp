#include<bits/stdc++.h>
using namespace std;

class Stack{
    vector<int> v;
    public: 
        Stack(){

        }

        void push(int val){
            v.push_back(val);
        }

        void display(){
            for(auto x: v){
                cout<<x<<" ";
            }
        }
};

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);


    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    Stack* s1 = new Stack();

    Stack s2;

    s2.push(30);
    s2.display();
    cout<<endl;

    s1->push(20);

    s1->display();

    return 0;
}