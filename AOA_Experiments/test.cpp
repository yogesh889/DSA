#include<bits/stdc++.h>
using namespace std;
#define INF 99999

int main(){

    int V = 4; 

    vector<vector<int>> edges = {
        {0, 1, 5},    // 0 -> 1 = 5
        {0, 3, 10},   // 0 -> 3 = 10
        {1, 2, 3},    // 1 -> 2 = 3
        {2, 3, 1}     // 2 -> 3 = 1
    };

    vector<vector<int>> dist(V, vector<int>(V, INF));

    for(int i=0; i<V; i++){
        dist[i][i] = i;
    }

    for(auto edge: edges){
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];
        dist[u][v] = wt;
    }

    for(int k=0; k<V; k++){
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                if(dist[i][k] == INF && dist[k][j] == INF){
                    dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
                }
            }
        }
    }

    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            if(dist[i][j] == INF){
                cout<<"INF ";
            }else{
                cout<<dist[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}