#include <bits/stdc++.h>
using namespace std;
class UnweightedGraph{
    int V, E;
public:
    // Unweighted Directed Graph using Adjacency List
    void Unweighted_directed_List()
    {
        cout << "Enter vertices and edges for Unweighted Directed Graph: ";
        cin >> V >> E;
        vector<vector<int>> AdjList(V);
        cout << "Enter (u v):\n";
        for(int i = 0; i < E; i++){
            int u, v;
            cin >> u >> v;
            AdjList[u].push_back(v);
        }
        cout << "\nDirected Graph Adjacency List\n";
        for(int i = 0; i < V; i++)
        {
            cout << i << " : ";

            for(auto x : AdjList[i])
            {
                cout << x << " ";
            }

            cout << endl;
        }
    }

    // Unweighted Undirected Graph using Adjacency List
    void Unweighted_undirected_List()
    {
        cout << "\nEnter vertices and edges for Unweighted Undirected Graph: ";
        cin >> V >> E;

        vector<vector<int>> AdjList(V);

        cout << "Enter (u v):\n";

        for(int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;

            AdjList[u].push_back(v);
            AdjList[v].push_back(u);
        }

        cout << "\nUndirected Graph Adjacency List\n";

        for(int i = 0; i < V; i++)
        {
            cout << i << " -> ";

            for(auto x : AdjList[i])
            {
                cout << x << " ";
            }

            cout << endl;
        }
    }
};

int main()
{
    UnweightedGraph ug;

    ug.Unweighted_directed_List();

    cout << endl;

    ug.Unweighted_undirected_List();

    return 0;
}