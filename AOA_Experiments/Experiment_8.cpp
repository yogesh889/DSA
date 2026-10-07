#include <iostream>

#include <vector>

#include <queue>

using namespace std;

int spanningTree(int V, vector<vector<int>> adj[], int stNode)
{

    // Min heap: {weight, vertex}

    priority_queue<pair<int, int>,

                   vector<pair<int, int>>,

                   greater<pair<int, int>>>
        pq;

    // To check whether vertex is already included in MST

    vector<bool> visited(V, false);

    int minCost = 0;

    // Start from vertex 0

    pq.push({0, 0});

    while (!pq.empty())
    {

        // Get minimum weight edge

        int wt = pq.top().first;

        int u = pq.top().second;

        pq.pop();

        // If already included, skip it

        if (visited[u])
            continue;

        // Include vertex in MST

        visited[u] = true;

        // Add edge weight to total cost

        minCost += wt;

        // Visit all adjacent vertices

        for (auto edge : adj[u])
        {

            int v = edge[0];

            int weight = edge[1];

            // If vertex is not already in MST

            if (!visited[v])
            {

                pq.push({weight, v});
            }
        }
    }

    return minCost;
}

int main()
{

    int V;
    int E;
    vector<vector<int>> adj[V];
    cout<<"Enter number of vertices: ";
    cin>>V;

    cout<<"Enter number of edges: ";
    cout<<E;

    for(int i=0; i<E; i++){
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    cout << "Minimum Cost = "
         << spanningTree(V, adj) << endl;

    return 0;
}

// PRIM                         KRUSKAL

// Vertex based                 Edge based
//      ↓                            ↓
// Start from a vertex          Look at all edges
//      ↓                            ↓
// Grow one tree                Sort by weight
//      ↓                            ↓
// Min heap                     DSU
//      ↓                            ↓
// Visited[]                    Union-Find

// Time  = O(E log E)
// Space = O(V + E)