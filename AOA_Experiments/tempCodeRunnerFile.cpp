#include<bits/stdc++.h>
using namespace std;

void BFS(int stNode, vector<vector<int>> &graph, int V){
    vector<bool> visited(V, false);
    queue<int> q;
    visited[stNode] = true;
    q.push(stNode);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(int &x: graph[node]){
            if(!visited[x]){
                visited[x] = true;
                q.push(x);
            }
        }
    }
}

int main(){

    int V, E;
    cout<<"Enter number of Vertex: ";
    cin>>V;

    vector<vector<int>> graph(V);

    cout<<"Enter number of Edge: ";
    cin>>E;

    for(int i=0; i<E; i++){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout<<endl;

    for(int i=0; i<V; i++){
        cout<<i<<": ";
        for(int x: graph[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }

    int stNode;
    cout<<"Enter starting node: ";
    cin>>stNode;

    BFS(stNode, graph, V);

    return 0;
}