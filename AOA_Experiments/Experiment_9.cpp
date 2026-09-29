// Floyd-Warshall Algorithm
// All-Pairs Shortest Path (APSP)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define INF 99999

int main()
{
    int V = 4;

    // u = source
    // v = destination
    // w = weight

    vector<vector<int>> edges =
    {
        {0, 1, 5},    // 0 -> 1 = 5
        {0, 3, 10},   // 0 -> 3 = 10
        {1, 2, 3},    // 1 -> 2 = 3
        {2, 3, 1}     // 2 -> 3 = 1
    };

    // -----------------------------------
    // STEP 1: Create distance matrix
    // -----------------------------------

    vector<vector<int>> dist(V, vector<int>(V, INF));

    // Distance from a vertex to itself = 0

    for (int i = 0; i < V; i++)
    {
        dist[i][i] = 0;
    }

    // -----------------------------------
    // STEP 2: Fill direct edge distances
    // -----------------------------------

    for (auto edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int w = edge[2];

        dist[u][v] = w;
    }

    // -----------------------------------
    // STEP 3: Floyd-Warshall
    // -----------------------------------

    for (int k = 0; k < V; k++)
    {
        for (int u = 0; u < V; u++)
        {
            for (int v = 0; v < V; v++)
            {
                // Check whether u -> k -> v is possible

                if (dist[u][k] != INF &&
                    dist[k][v] != INF)
                {
                    dist[u][v] = min(
                        dist[u][v],
                        dist[u][k] + dist[k][v]
                    );
                }
            }
        }
    }

    // -----------------------------------
    // STEP 4: Print shortest distances
    // -----------------------------------

    cout << "Shortest Distance Matrix:\n\n";

    for (int u = 0; u < V; u++)
    {
        for (int v = 0; v < V; v++)
        {
            if (dist[u][v] == INF)
            {
                cout << "INF ";
            }
            else
            {
                cout << dist[u][v] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}