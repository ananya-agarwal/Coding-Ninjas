#include <iostream>
using namespace std;
#include<bits/stdc++.h>
#include<vector>

vector<int> * getPathBFS(int **edges, int n, bool *visited, int start, int end)
{
    
    if(start == end)
    {
     	vector<int> *smallAns = new vector<int>();
        smallAns->push_back(end);
        return smallAns;
    }
    visited[start] = true;
    
    for(int i=0;i<n;i++)
    {
        if(edges[start][i] == 1 && !visited[i])
        {
            vector<int> *vNew = getPathBFS(edges, n, visited,i,end);
            
            if(vNew)
            {
                vNew->push_back(start);
                return vNew;
            }
        }
    }
    return NULL;
}

int main() {
    // Write your code here
    int n,e;
    cin>>n>>e;
    
    int ** edges = new int*[n];
    
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
    
    
    vector <int>* ans = getPathBFS(edges,n,visited,start,end);
    
    if(ans != NULL)
    {
        for(int i=0;i<ans->size();i++)
            cout<<ans->at(i)<<" ";
    }

    delete ans;
    
	for(int i=0 ;i<n ;i++)
    	delete [] edges[i];
    
    delete [] edges;
    delete [] visited;
    
}
