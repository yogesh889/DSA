#include<bits/stdc++.h>

using namespace std;

void BFS(int start, vector<vector<int>>& adj, int V)
{
    vector<bool> visited(V, false);

    queue<int> q;

    // Step 1: Start node
    visited[start] = true;
    q.push(start);

    cout << "Reachable nodes using BFS: ";

    while (!q.empty())
    {
        // Step 2: Remove front node
        int current = q.front();
        q.pop();

        cout << current << " ";

        // Step 3: Visit all neighbors
        for (int neighbor : adj[current])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    cout << endl;
}

int main()
{
    int V, E;

    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<int>> adj(V);

    cout << "Enter edges:\n";

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;

        // Undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;

    cout << "Enter starting node: ";
    cin >> start;

    BFS(start, adj, V);

    return 0;
}

// Time  = O(V + E)
// Space = O(V)  ← including graph storage