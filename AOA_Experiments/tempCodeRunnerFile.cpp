#include<bits/stdc++.h>
using namespace std;
#define INF 99999

int main(){

	int V;
	cout<<"Enter the number of vertices: ";
	cin>>V;

	int E;
	cout<<"Enter the number of edges: ";
	cin>>E;

	vector<vector<int>> edges;

	for(int i=0; i<E; i++){
		int u, v, w;
		cin>>u>>v>>w;
		edges.push_back({u, v, w});
	}

	vector<vector<int>> dist(V,vector<int>(V, INF));

	for(int i=0; i<V; i++){
		dist[i][i] = 0;

	}

	for(auto &edge: edges){
		int u = edge[0];
		int v = edge[1];
		int w = edge[2];
		dist[u][v] = w;
	}

	for(int k=0; k<V; k++){ //Intermediate point
		for(int i=0; i<V; i++){ //starting point
			for(int j=0; j<V; j++){ //eding point
				if(dist[i][k] != INF || dist[k][j] != INF){
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
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
	}

	return 0;
}