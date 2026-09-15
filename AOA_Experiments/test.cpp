#include<bits/stdc++.h>
using namespace std;

void DFS(int stNode, vector<vector<int>> &graph, vector<bool> &visited){
    visited[stNode] = true;
    cout<<stNode<<" ";
    for(int neighbor: graph[stNode]){
        if(!visited[neighbor]){
            DFS(neighbor, graph, visited);
        }
    }
}

int main(){

    int V, E;
    cout<<"Enter number of Vetex: ";
    cin>>V;

    vector<vector<int>> graph(V);

    cout<<"Enter number of Edges: ";
    cin>>E;

    cout<<"Connected vertex \n"
    for(int i=0; i<E; i++){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout<<"print all the nodes using adjacency list";
    for(int i=0; i<V; i++){
        cout<<i<<": ";
        for(int neighbor: graph[i]){
            cout<<neighbor<<" ";
        }
        cout<<endl;
    }

    vector<bool> visited(V, false);
    
    int stNode;
    cout<<"Enter starting Node: ";
    cin>>stNode;

    DFS(stNode, graph, visited);

    bool connected = true;

    for(int i=0; i<V; i++){
        if(visited[i] == false){
            connected = false;
            break;
        }
    }

    cout<<"GRaph is connected or not: "<<endl;
    if(connected){
        cout<<"graph is connected";
    }else{
        cout<<"graph is not connected";
    }

    return 0;
}