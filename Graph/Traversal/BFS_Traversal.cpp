#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(int start, vector<int> adj[], int V)
{
    vector<int> visited(V, 0);

    queue<int> q;

    visited[start] = 1;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                visited[neighbour] = 1;
                q.push(neighbour);
            }
        }
    }
}

int main()
{
    int V = 6;

    //vector of array
    vector<int> adj[6];

    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(0);
    adj[1].push_back(3);
    adj[1].push_back(4);
    adj[2].push_back(0);
    adj[2].push_back(5);
    adj[3].push_back(1);
    adj[4].push_back(1);
    adj[5].push_back(2);
    
    cout << "BFS Traversal : ";

    BFS(1, adj, V);

    return 0;
}