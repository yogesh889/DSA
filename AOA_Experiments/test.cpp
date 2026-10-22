#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int V, E;
    // cout << "Enter number of vertices: ";
    // cin >> V;
    // cout << "Enter number of edges: ";
    // cin >> E;

    // vector<vector<int>> graph[V];
    // for (int i = 0; i < E; i++)
    // {
    //     int u, v, w;
    //     cin >> u >> v >> w;

    //     graph[u].push_back({v, w});
    //     graph[v].push_back({u, w});
    // }

    // for(int i=0; i<V; i++){
    //     cout<<i<<": ";
    //     for(auto &neighbour: graph[i]){
    //         cout<<neighbour[0]<<" "<<neighbour[1]<<", ";
    //     }
    //     cout<<endl;
    // }

    vector<int> vec(5);

    // vec[3] = 5;
    vec.push_back(5);

    for(int x: vec){
        cout<<x<<" ";
    }

    return 0;
}