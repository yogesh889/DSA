#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(50);
    pq.push(20);
    pq.push(0);

    cout<<pq.top()<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}