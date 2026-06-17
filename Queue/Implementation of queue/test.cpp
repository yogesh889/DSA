#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> q;
    

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    queue<int> temp = q;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop();

    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }

    return 0;
}