#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &visited)
{
    visited[node] = true;

    cout << node << " ";

    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor, adj, visited);
        }
    }
    // Void function automatically return when it reaches its closing
    // or we can implicit mention return statement;
    return ;
}

int main()
{
    int V = 6;

    vector<int> adj[V];

    adj[0].push_back(1);
    adj[0].push_back(2);

    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[1].push_back(4);

    adj[2].push_back(0);
    adj[2].push_back(5);

    adj[3].push_back(1);

    adj[4].push_back(1);
    adj[4].push_back(2);

    adj[5].push_back(2);


    vector<bool> visited(V, false);

    cout << "DFS Traversal : ";

    dfs(0, adj, visited);

    return 0;
}