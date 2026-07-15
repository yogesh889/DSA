#include<bits/stdc++.h>
using namespace std;

int main(){

    int V, E; 

    cin>>V>>E;

    vector<vector<int>> matrix(V, vector<int> (V, 0));

    for(int i=0; i<E; i++){
        int u, v;
        cin>>u>>v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }

    for(int i=0; i<V; i++){
        for(int j=0; j<V; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}