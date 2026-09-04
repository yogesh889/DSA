#include<bits/stdc++.h>
using namespace std;

class solution{
    public: 
    vector<int> dijkstra(int V, vector<vector<int>> graph[], int S){
        // priority_queue<int, vector<int>, greater<int>> pq;
        priority_queue<pair<int, int>,  vector<pair<int, int>>, greater<pair<int, int>> > pq;\

        vector<int> result(V, 1e9);

        result[S] = 0;
        pq.push({0, S});

        while(!pq.empty()){
            int d = pq.top().first;
            int node = pq.top().second; 
            pq.pop();
            for(auto x: graph[node]){
                int dist = x[1];
                int adjNode = x[0];
                if(d+dist < result[adjNode]){
                    result[adjNode] = d+dist;
                    pq.push({d+dist, adjNode});
                }
            }
        }
        return result;
    }
};

int main(){

    int V = 3;
    int S = 2;

    vector<vector<int>> graph[V];

    graph[0].push_back({1, 1});
    graph[0].push_back({2, 6});
    graph[1].push_back({0, 1});
    graph[1].push_back({2, 3});
    graph[2].push_back({0, 6});
    graph[2].push_back({1, 3});

    solution obj;

    vector<int> shortest_dist = obj.dijkstra(V, graph, S);

    for(int i=0; i<V; i++){
        cout<<shortest_dist[i]<<" ";
    }
    return 0;
}