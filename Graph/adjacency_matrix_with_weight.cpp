#include<bits/stdc++.h>
using namespace std;

int main(){

    int V, E;
    cin>>V>>E;

    vector<vector<int>> Admat(V, vector<int> (V, 0)); 

    for(int i=0; i<E; i++){
        int u, v, w;
        cin>>u>>v>>w;
        Admat[u][v] = w;
        Admat[v][u] = w;
    }

    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            cout<<Admat[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}