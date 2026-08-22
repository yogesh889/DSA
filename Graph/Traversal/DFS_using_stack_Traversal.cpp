#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int start, vector<int> adj[], int V)
{
    vector<bool> visited(V, false);
    stack<int> st;

    st.push(start);

    while (!st.empty())
    {
        int node = st.top();
        st.pop();

        if (!visited[node])
        {
            visited[node] = true;
            cout << node << " ";

            // Push neighbors in reverse order
            for (int i = adj[node].size() - 1; i >= 0; i--)
            {
                int neighbor = adj[node][i];
                if (!visited[neighbor])
                {
                    st.push(neighbor);
                }
            }
        }
    }
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

    cout << "DFS Traversal: ";
    dfs(0, adj, V);

    return 0;
}