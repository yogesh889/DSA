#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj;

    // Function to add an edge
    void addEdge(int u, int v)
    {
        // Since the graph is undirected,
        // add edges in both directions.
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Function to print adjacency list
    void printAdjList()
    {
        cout << "\nAdjacency List:\n";

        for(auto node : adj)
        {
            cout << node.first << " -> ";

            for(auto neighbour : node.second)
            {
                cout << neighbour << " ";
            }

            cout << endl;
        }
    }
};

int main()
{
    int vertices, edges;

    cout << "Enter number of vertices: ";
    cin >> vertices;

    cout << "Enter number of edges: ";
    cin >> edges;

    Graph g;

    cout << "\nEnter the edges (u v):\n";

    for(int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;

        g.addEdge(u, v);
    }

    g.printAdjList();

    return 0;
}