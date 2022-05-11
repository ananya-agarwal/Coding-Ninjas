#include <iostream>
using namespace std;

void DFS(bool **edges, int n, int sv, bool *visited)
{
    visited[sv] = true;

    for (int i = 0; i < n; i++)
    {
        if (edges[sv][i] && !visited[i])
        {
            DFS(edges, n, i, visited);
        }
    }
}

int connectedGroups(bool **edges, int n)
{
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            count++;
            DFS(edges, n, i, visited);
        }
    }

    return count;
}

int main()
{
    // Write your code here
    int v;
    cin >> v;
    int e;
    cin >> e;

    bool **edges = new bool *[v];
    for (int i = 0; i < v; i++)
    {
        edges[i] = new bool[v];
        for (int j = 0; j < v; j++)
        {
            edges[i][j] = false;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = true;
        edges[s][f] = true;
    }

    cout << connectedGroups(edges, v) << endl;

    return 0;
}


