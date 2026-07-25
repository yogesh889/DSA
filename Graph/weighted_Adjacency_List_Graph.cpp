#include <bits/stdc++.h>
using namespace std;

class WeightedGraph
{
    int V, E;

public:

    // Weighted Directed Graph using Adjacency List
    void Weighted_directed_List()
    {
        cout << "Enter vertices and edges for weighted Directed Graph: ";
        cin >> V >> E;

        vector<pair<int,int>> AdjList[V];

        cout << "Enter (u v weight):\n";

        for(int i = 0; i < E; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;

            AdjList[u].push_back({v, w});
        }

        cout << "\nDirected Graph Adjacency List\n";

        for(int i = 0; i < V; i++)
        {
            cout << i << " -> ";

            for(auto x : AdjList[i])
            {
                cout << "(" << x.first << "," << x.second << ") ";
            }

            cout << endl;
        }
    }

    // Weighted Undirected Graph using Adjacency List
    void Weighted_undirected_List()
    {
        cout << "\nEnter vertices and edges for weighted Undirected Graph: ";
        cin >> V >> E;

        vector<pair<int,int>> AdjList[V];

        cout << "Enter (u v weight):\n";

        for(int i = 0; i < E; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;

            AdjList[u].push_back({v, w});
            AdjList[v].push_back({u, w});
        }

        cout << "\nUndirected Graph Adjacency List\n";

        for(int i = 0; i < V; i++)
        {
            cout << i << " -> ";

            for(auto x : AdjList[i])
            {
                cout << "(" << x.first << "," << x.second << ") ";
            }

            cout << endl;
        }
    }
};

int main()
{
    WeightedGraph wg;

    wg.Weighted_directed_List();

    cout << endl;

    wg.Weighted_undirected_List();

    return 0;
}