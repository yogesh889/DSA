#include<bits/stdc++.h>
using namespace std;

void DFS(vector<bool> &visited, vector<vector<int>> graph, int stNode){
    visited[stNode] = true;
    cout<<stNode<<" ";
    for(int neighbour: graph[stNode]){
        if(!visited[neighbour]){
            DFS(visited, graph, neighbour);
        }
    }
}

int main(){

    int V, E;

    cout<<"Enter number of vertices: ";
    cin>>V;

    cout<<"Enter number of edges: ";
    cin>>E;

    vector<vector<int>> graph(V);

    for(int i=0; i<E; i++){
        int u, v;
        cin>>u>>v;
        //Undirected graph
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout<<"print graph"<<endl;

    for(int i=0; i<V; i++){
        cout<<i<<": ";
        for(int &neighbour: graph[i]){
            cout<<neighbour<<" ";
        }
        cout<<endl;
    }

    vector<bool> visited(V, false);

    int stNode;
    cout<<"Enter starting node: ";
    cin>>stNode;

    DFS(visited, graph, stNode);

    bool connected = true;

    for(int i=0; i<V; i++){
        if(visited[i] == false){
            connected = false;
            break;
        }
    }

    cout<<endl;

    if(connected){
        cout<<"graph is connected";
    }else{
        cout<<"graph is not connected";
    }

    return 0;
}