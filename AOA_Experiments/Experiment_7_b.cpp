#include <iostream>
#include <vector>

using namespace std;

void DFS(int current, vector<vector<int>>& adj, vector<bool>& visited)
{
    // Mark current node visited
    visited[current] = true;

    cout << current << " ";

    // Visit all unvisited neighbors
    for (int neighbor : adj[current])
    {
        if (!visited[neighbor])
        {
            DFS(neighbor, adj, visited);
        }
    }
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

    vector<bool> visited(V, false);

    cout << "DFS traversal: ";

    // Start DFS from vertex 0
    DFS(0, adj, visited);

    cout << endl;

    // Check whether every vertex was visited
    bool connected = true;

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            connected = false;
            break;
        }
    }

    if (connected)
    {
        cout << "Graph is Connected." << endl;
    }
    else
    {
        cout << "Graph is Not Connected." << endl;
    }

    return 0;
}

// time complexity = O(V+E);
// space complexity = O(V);