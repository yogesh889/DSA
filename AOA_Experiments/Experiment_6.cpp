#include <bits/stdc++.h>
using namespace std;

class Edge{
    public:
        int u, v, weight;
};

int parent[100];

int comparater(Edge a, Edge b){
    return a.weight < b.weight;
}

int findParent(int x)
{
    if (parent[x] == x)
        return x;

    return parent[x] = findParent(parent[x]);
}

void unite(int u, int v)
{
    u = findParent(u);
    v = findParent(v);

    parent[u] = v;
}

int main()
{
    int V, E;

    cin>>V>>E;

    vector<Edge> edges;
    for(int i = 0; i<E; i++){
        Edge e;
        cin>> e.u >> e.v >> e.weight;
        edges.push_back(e);
    }
    // vector<Edge> edges =
    // {
    //     {0, 1, 10},
    //     {0, 2, 6},
    //     {0, 3, 5},
    //     {1, 3, 4},
    //     {2, 3, 3}
    // };

    // Initialize DSU
    for (int i = 0; i < V; i++){
        parent[i] = i;
    }

    // sort(edges.begin(), edges.end(), [](Edge a, Edge b){
    //     return a.weight < b.weight;
    // });

    // Sort edges by weight
    sort(edges.begin(), edges.end(), comparater);

    int cost = 0;
    int count = 0;

    for (Edge e : edges)
    {
        // No cycle?
        // If parent of both the vertex is same then cycle is forming
        // if not then we can move ahead.
        if (findParent(e.u) != findParent(e.v))
        {
            // now print u to v and weight
            cout << e.u << " - "
                 << e.v << " = "
                 << e.weight << endl;

            // calculate cost
            cost += e.weight;

            // Update parent vector using unite function
            unite(e.u, e.v);

            // count edge by incrementing count
            count++;

            if (count == V - 1)
                break;
        }
    }

    cout << "MST Cost = " << cost;

    return 0;
}