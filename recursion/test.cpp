#include<bits/stdc++.h>
using namespace std;

void DFS(vector<bool> &visited, vector<vector<int>> &graph, int stNode){
    visited[stNode] = true;
    cout<<stNode<<" ";
    for(int &neighbor: graph[stNode]){
        if(!visited[neighbor]){
            DFS(visited, graph, neighbor);
        }
    }
}

int main(){

    int V, E;
    cout<<"Enter number of Vertex: ";
    cin>>V;

    vector<vector<int>> graph(V);

    cout<<"Enter number of Edges: ";
    cin>>E;

    for(int i=0; i<E; i++){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // for(int i=0; i<E; i++){
    //     cout<<i<<": ";
    //     for(int neighbor: graph[i]){
    //         cout<<neighbor<<" ";
    //     }
    //     cout<<endl;
    // }

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

    if(connected){
        cout<<"graph is connected";
    }else{
        cout<<"graph is not connected";
    }


    return 0;
}