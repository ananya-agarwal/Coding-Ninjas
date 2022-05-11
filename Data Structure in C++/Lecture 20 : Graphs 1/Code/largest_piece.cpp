#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int helper(vector<vector<int>> &cake, int i, int j, bool **edges, int n)
{
    if(edges[i][j]) //agar visit krliya toh return 0 directly
        return 0;
    
    edges[i][j] = true;

    int move[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    int sum = 1;
    for (int k = 0; k < 4; k++)
    {
        int nextI = i + move[k][0];
        int nextJ = j + move[k][1];
        
        if (nextI >= 0 && nextJ >= 0 && nextI < n && nextJ < n && cake[nextI][nextJ] == 1)
            sum += helper(cake, nextI, nextJ, edges, n);  
    }
    
    return sum;
}

int getBiggestPieceSize(vector<vector<int>> &cake, int n)
{
    bool **edges = new bool *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new bool[n];
        for(int j = 0; j < n; j++)
            edges[i][j] = false;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (!edges[i][j] && cake[i][j] == 1)//!false = true
                count = max(count, helper(cake, i, j, edges, n));
    
    return count;
}
