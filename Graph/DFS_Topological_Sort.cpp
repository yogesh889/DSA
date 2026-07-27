#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<vector<int>>& graph,
         vector<bool>& visited,
         stack<int>& st)
{
    visited[node] = true;

    for(int neighbour : graph[node])
    {
        if(!visited[neighbour])
            dfs(neighbour, graph, visited, st);
    }

    st.push(node);
}

int main()
{
    int V = 6;

    vector<vector<int>> graph(V);

    graph[5].push_back(2);
    graph[5].push_back(0);
    graph[4].push_back(0);
    graph[4].push_back(1);
    graph[2].push_back(3);
    graph[3].push_back(1);

    vector<bool> visited(V,false);

    stack<int> st;

    for(int i=0;i<V;i++)
    {
        if(!visited[i])
            dfs(i,graph,visited,st);
    }

    cout<<"Topological Order\n";

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}