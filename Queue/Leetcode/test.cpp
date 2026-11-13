#include<bits/stdc++.h>
using namespace std;

int main(){

    //Min heap priority Queue
    priority_queue<int> pq;

    pq.push(90);
    pq.push(40);
    pq.push(100);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    cout<<endl;

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}