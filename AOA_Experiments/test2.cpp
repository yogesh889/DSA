#include<bits/stdc++.h>
using namespace std;

#define INF 99999

int main(){

    int V, E;
    cout<<"Enter vertex: ";
    cin>>V;
    cout<<"Enter Edge: ";
    cin>>E;

    vector<vector<int>> graph;

    for(int i=0; i<E; i++){
        int u, v, w;
        cin>>u>>v>>w;
        graph.push_back({u, v, w});
    }
    cout<<"printing adjacency list \n";
    for(auto &x: graph){
        cout<<x[0]<<" "<<x[1]<<": "<<x[2]<<endl;
    }

    vector<vector<int>> dist(V, vector<int>(V, INF));

    for(int i=0; i<V; i++){
        dist[i][i] = 0;
    }

    for(auto x: graph){
        int u = x[0];
        int v = x[1];
        int w = x[2];
        dist[u][v] = w;
        // dist[v][u] = w;
    }

    for(int k=0; k<V; k++){ //Intermediate point
        for(int i=0; i<V; i++){ //Starting point
            for(int j=0; j<V; j++){ // Ending point
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }

    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            if(dist[i][j] == INF){
                cout<<"INF ";
            }else{
                cout<<dist[i][j]<<"   ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}