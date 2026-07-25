#include <bits/stdc++.h>
using namespace std;

class WeightedGraph
{
    int V, E;

public:

    void Weighted_directed_matrix()
    {
        cout << "Enter vertices and edges for Directed Graph: ";
        cin >> V >> E;

        vector<vector<int>> Admat(V, vector<int>(V, 0));

        cout << "Enter (u v weight):\n";

        for(int i = 0; i < E; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;

            Admat[u][v] = w;
        }

        cout << "\nDirected Graph Adjacency Matrix\n";

        for(int i = 0; i < V; i++)
        {
            for(int j = 0; j < V; j++)
            {
                cout << Admat[i][j] << " ";
            }
            cout << endl;
        }
    }

    void Weighted_undirected_matrix()
    {
        cout << "\nEnter vertices and edges for Undirected Graph: ";
        cin >> V >> E;

        vector<vector<int>> Admat(V, vector<int>(V, 0));

        cout << "Enter (u v weight):\n";

        for(int i = 0; i < E; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;

            Admat[u][v] = w;
            Admat[v][u] = w;
        }

        cout << "\nUndirected Graph Adjacency Matrix\n";

        for(int i = 0; i < V; i++)
        {
            for(int j = 0; j < V; j++)
            {
                cout << Admat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    WeightedGraph wg;

    wg.Weighted_directed_matrix();

    cout << endl;

    wg.Weighted_undirected_matrix();

    return 0;
}