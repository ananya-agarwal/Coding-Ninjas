#include <iostream>
using namespace std;
//3-3 ki cycle dhondho
//p to q ha but vapas q to p check nhi krna, CHECK FOR Q TO R

int count3Cycle(bool **edges, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (edges[i][j] && edges[j][k] && edges[k][i])
                {
                    count++;
                }
            }
        }
    }
    return count / 6; //since 1,2,4..aise 3fact = 6 combos are possible
    //visited nahi lena yaha kyuki 1 vertex can be part of more than 1 cycle
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    bool **edges = new bool *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new bool[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = false;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = true;
        edges[s][f] = true;
    }

    cout << count3Cycle(edges, n) << endl;

    return 0;
}
