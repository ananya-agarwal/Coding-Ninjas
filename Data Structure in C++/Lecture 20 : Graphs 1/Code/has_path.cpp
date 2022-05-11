#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool hasPath(int **edges, int n , bool* visited, int start, int end)
{
    
    if(edges[start][end] == 1)
        return true;
    
    visited[start] = true;
    
    for(int i=0;i<n;i++)
    {
        if(edges[start][i] == 1)
        {
            if(visited[i])
                continue;
            
            if(hasPath(edges, n, visited, i,end))
                return true;
        }      
    }
    
    return false;
}


int main()
{
    // Write your code here
    int n,e;
    cin>>n>>e;
    
    int **edges = new int*[n];
    for(int i=0;i<n;i++)
    {
        edges[i] = new int[n];
        for(int j=0;j<n;j++)
            edges[i][j] = 0;
    }
    
    int s,f;
    for(int i=0;i<e;i++)
    {
        cin>>s>>f;
        edges[s][f] = 1;
        edges[f][s] = 1;
    }
    
    int start,end;
    cin>>start>>end;
    
    bool *visited = new bool[n];
    memset(visited,false,sizeof(visited));
    

    //The result of a Boolean function cannot be printed; it can only be used as a condition
    //thus cant print it directly by writing cout<<hasPath()
    
    if(hasPath(edges,n,visited,start,end))
        cout<<"true";
    else
        cout<<"false";
    
    for(int i=0;i<n;i++)
        delete edges[i];
    delete [] edges;
}

