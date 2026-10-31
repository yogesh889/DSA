#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

class Solution
{
public:
    // Function to find the shortest distance of all vertices from source S
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {

        // 1. Min-Heap Priority Queue to store {distance, node}
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>>
            pq;

        // 2. Result array initialized with infinity
        vector<int> result(V, INT_MAX);

        // 3. Distance from source to itself is 0
        result[S] = 0;
        pq.push({0, S});

        // 4. Process nodes using Min-Heap
        while (!pq.empty())
        {

            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            // Ignore outdated distance
            if (d > result[node])
            {
                continue;
            }

            // 5. Check all adjacent vertices
            for (auto &vec : adj[node])
            {

                int adjNode = vec[0];
                int dist = vec[1];

                // 6. Relaxation Step
                if (d + dist < result[adjNode])
                {

                    result[adjNode] = d + dist;

                    pq.push({d + dist, adjNode});
                }
            }
        }

        // 7. Convert unreachable vertices to -1
        for (int i = 0; i < V; i++)
        {
            if (result[i] == INT_MAX)
            {
                result[i] = -1;
            }
        }

        return result;
    }
};

int main()
{

    // Number of vertices and edges
    int V, E;
    cin >> V >> E;

    // Adjacency list representation
    vector<vector<int>> adj[V];

    // Input edges
    for (int i = 0; i < E; i++)
    {

        int u, v, w;
        cin >> u >> v >> w;

        // Undirected graph
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    // Source vertex
    int S;
    cin >> S;

    // Instantiate Solution class
    Solution obj;

    // Call Dijkstra's algorithm
    vector<int> shortest_distances = obj.dijkstra(V, adj, S);

    // Print shortest distances
    for (int i = 0; i < V; i++)
    {
        cout << shortest_distances[i] << " ";
    }

    cout << endl;

    return 0;
}
