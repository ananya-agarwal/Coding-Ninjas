#include <iostream>
#include <vector>
using namespace std;

bool helper(vector<vector<char>> &board, int x, int y, int preX, int preY, char color, bool **visited, int n, int m)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
        return false;

    if (board[x][y] != color)
        return false;

    if (visited[x][y])
        return true;

    visited[x][y] = true;

    int path[4][2] = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

    for (int i = 0; i < 4; i++)
    {
        int nextX = x + path[i][0];
        int nextY = y + path[i][1];
        if (nextX == preX && nextY == preY)
            continue;
        
        if (helper(board, nextX, nextY, x, y, color, visited, n, m))
            return true;
    }
    return false;
}

bool hasCycle(vector<vector<char>> &board, int n, int m)
{
    bool **visited = new bool *[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = new bool[m];
        for (int j = 0; j < m; j++)
            visited[i][j] = false;

    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j])
                if (helper(board, i, j, -1, -1, board[i][j], visited, n, m))
                    return true;
        }
    }
    return false;
}
