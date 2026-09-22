#include <iostream>

#include <vector>

#include <queue>

using namespace std;

int spanningTree(int V, vector<vector<int>> adj[])
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

    int V = 5;

    vector<vector<int>> adj[V];

    // 0 --2-- 1

    adj[0].push_back({1, 2});

    adj[1].push_back({0, 2});

    // 0 --6-- 3

    adj[0].push_back({3, 6});

    adj[3].push_back({0, 6});

    // 1 --3-- 2

    adj[1].push_back({2, 3});

    adj[2].push_back({1, 3});

    // 1 --8-- 3

    adj[1].push_back({3, 8});

    adj[3].push_back({1, 8});

    // 1 --5-- 4

    adj[1].push_back({4, 5});

    adj[4].push_back({1, 5});

    // 2 --7-- 4

    adj[2].push_back({4, 7});

    adj[4].push_back({2, 7});

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