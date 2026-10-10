#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v, weight;
};

int parent[100];
int rankArr[100];

bool comparator(Edge a, Edge b)
{
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

    // Both vertices already belong to the same set
    if (u == v)
        return;

    // Union by Rank
    if (rankArr[u] < rankArr[v])
    {
        parent[u] = v;
    }
    else if (rankArr[u] > rankArr[v])
    {
        parent[v] = u;
    }
    else
    {
        parent[u] = v;
        rankArr[v]++;
    }
}

int main()
{
    int V, E;
    cin >> V >> E;

    if (V <= 0 || V > 100 || E < 0)
    {
        cout << "Invalid input";
        return 0;
    }

    vector<Edge> edges;

    for (int i = 0; i < E; i++)
    {
        Edge e;
        cin >> e.u >> e.v >> e.weight;

        if (e.u < 0 || e.u >= V ||
            e.v < 0 || e.v >= V)
        {
            cout << "Invalid vertex index";
            return 0;
        }

        edges.push_back(e);
    }

    // Initialize DSU
    for (int i = 0; i < V; i++)
    {
        parent[i] = i;
        rankArr[i] = 0;
    }

    // Sort edges by weight
    sort(edges.begin(), edges.end(), comparator);

    int cost = 0;
    int count = 0;

    for (Edge e : edges)
    {
        if (findParent(e.u) != findParent(e.v))
        {
            cout << e.u << " - "
                 << e.v << " = "
                 << e.weight << '\n';

            cost += e.weight;

            unite(e.u, e.v);

            count++;

            if (count == V - 1)
                break;
        }
    }

    if (count != V - 1)
    {
        cout << "MST cannot be formed because the graph is disconnected.\n";
    }
    else
    {
        cout << "MST Cost = " << cost << '\n';
    }

    return 0;
}
