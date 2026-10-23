#include<bits/stdc++.h>
using namespace std;
#define INF 99999

int main(){

    int V, E;
    cout<<"Enter vertices: ";
    cin>>V;
    cout<<"Enter Edges: ";
    cin>>E;

    vector<vector<int>> edges;

    for(int i=0; i<E; i++){
        int u, v, w;
        cin>>u>>v>>w;
        edges.push_back({u, v, w});
    }

    cout<<"Printing Edge List \n";
    for(auto &x: edges){
        cout<<x[0]<<" "<<x[1]<<": "<<x[2]<<endl;
    }

    vector<vector<int>> dist(V, vector<int> (V, INF));

    for(int i=0; i<V; i++){
        dist[i][i] = 0;
    }

    for(auto &edge: edges){
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];
        dist[u][v] = w;
        // dist[v][u] = w;
    }

    for(int k=0; k<V; k++){
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }

    cout<<"Enter distance matrix \n";
    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            if(dist[i][j] == INF){
                cout<<"INF ";
            }else{
                cout<<" "<<dist[i][j]<<"   ";
            }
        }
        cout<<endl;
    }

    return 0;
}