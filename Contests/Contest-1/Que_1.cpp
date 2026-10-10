#include <iostream>
#include <string>
using namespace std;

#define N 10

int vis[N][N];
bool found = false;

void solve(int maze[N][N], int i, int j, string path, int n)
{
    // Destination reached
    if (i == n - 1 && j == n - 1)
    {
        cout << path << endl;
        found = true;
        return;
    }

    // Mark visited
    vis[i][j] = 1;

    // DOWN
    if (i + 1 < n && maze[i + 1][j] == 1 && vis[i + 1][j] == 0)
    {
        solve(maze, i + 1, j, path + "D", n);
    }

    // LEFT
    if (j - 1 >= 0 && maze[i][j - 1] == 1 && vis[i][j - 1] == 0)
    {
        solve(maze, i, j - 1, path + "L", n);
    }

    // RIGHT
    if (j + 1 < n && maze[i][j + 1] == 1 && vis[i][j + 1] == 0)
    {
        solve(maze, i, j + 1, path + "R", n);
    }

    // UP
    if (i - 1 >= 0 && maze[i - 1][j] == 1 && vis[i - 1][j] == 0)
    {
        solve(maze, i - 1, j, path + "U", n);
    }

    // BACKTRACK
    vis[i][j] = 0;
}

int main()
{
    int n;
    cin >> n;

    if (n < 1 || n > N)
    {
        cout << -1 << endl;
        return 0;
    }

    int maze[N][N] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }

    if (maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
    {
        cout << -1 << endl;
        return 0;
    }

    solve(maze, 0, 0, "", n);

    // No valid path found
    if (!found)
    {
        cout << -1 << endl;
    }

    return 0;
}
