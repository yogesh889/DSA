#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int> dq;

    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(40);

    cout<<"Dqueue: ";

    for(auto x: dq){
        cout<<x<<" ";
    }
    cout<<endl;

    dq.pop_front();

    cout<<"After front Delete: ";
    for(auto x: dq){
        cout<<x<<" ";
    }
    cout<<endl;

    dq.pop_back();
    cout<<"After rear Delete: ";
    for(auto x: dq){
        cout<<x<<" ";
    }
    cout<<endl;

    dq.push_front(50);
    dq.push_front(70);
    dq.push_front(80);
    for(auto x: dq){
        cout<<x<<" ";
    }

    cout<<endl;
    dq.push_back(500);
    dq.push_back(700);
    dq.push_back(800);
    for(auto x: dq){
        cout<<x<<" ";
    }

    return 0;
}