#include <iostream>
using namespace std;

#define N 4

int vis[N][N];

void solve(int maze[N][N], int i, int j, string path)
{
    // Destination reached
    if(i == N-1 && j == N-1)
    {
        cout << path << endl;
        return;
    }

    // Mark visited
    vis[i][j] = 1;

    // DOWN
    if(i+1 < N && maze[i+1][j] == 1 && vis[i+1][j] == 0)
    {
        solve(maze, i+1, j, path + "D");
    }

    // LEFT
    if(j-1 >= 0 && maze[i][j-1] == 1 && vis[i][j-1] == 0)
    {
        solve(maze, i, j-1, path + "L");
    }

    // RIGHT
    if(j+1 < N && maze[i][j+1] == 1 && vis[i][j+1] == 0)
    {
        solve(maze, i, j+1, path + "R");
    }

    // UP
    if(i-1 >= 0 && maze[i-1][j] == 1 && vis[i-1][j] == 0)
    {
        solve(maze, i-1, j, path + "U");
    }

    // BACKTRACK
    vis[i][j] = 0;
}

int main()
{
    int maze[N][N] =
    {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };

    string path = "";

    solve(maze, 0, 0, path);

    return 0;
}