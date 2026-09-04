#include <iostream>
#include <vector>
using namespace std;
void DFS(int node, vector<vector<int>> &graph, vector<bool> &visited)
{
    visited[node] = true;
    for (int neighbor : graph[node])
    {
        if (!visited[neighbor])
        {
            DFS(neighbor, graph, visited);
        }
    }
}
bool isConnected(vector<vector<int>> &graph, int V)
{
    vector<bool> visited(V, false);
    // Start DFS from vertex 0
    DFS(0, graph, visited);
    // Check if all vertices are visited
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
            return false;
    }
    return true;
}
int main()
{
    int V = 5;
    vector<vector<int>> graph(V);
    // Undirected Graph
    graph[0].push_back(1);
    graph[1].push_back(0);
    graph[0].push_back(2);
    graph[2].push_back(0);
    graph[1].push_back(3);
    graph[3].push_back(1);
    graph[3].push_back(4);
    graph[4].push_back(3);
    if (isConnected(graph, V))
        cout << "Graph is Connected";
    else
        cout << "Graph is Not Connected";
    return 0;
}