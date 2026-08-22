#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &visited)
{
    // Mark the current node as visited
    visited[node] = true;

    cout << "Visit Node : " << node << endl;

    // Traverse all adjacent nodes
    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            cout << "Move from " << node << " -> " << neighbor << endl;

            dfs(neighbor, adj, visited);

            // This line executes after returning from recursion
            cout << "Backtrack to " << node
                 << " from " << neighbor << endl;
        }
        else
        {
            cout << "Node " << neighbor
                 << " already visited. Skip." << endl;
        }
    }
}

int main()
{
    int V = 6;
    vector<int> adj[V];

    // Undirected Graph
    adj[0] = {1, 2};
    adj[1] = {0, 3, 4};
    adj[2] = {0, 5};
    adj[3] = {1};
    adj[4] = {1};
    adj[5] = {2};

    vector<bool> visited(V, false);

    dfs(0, adj, visited);

    return 0;
}