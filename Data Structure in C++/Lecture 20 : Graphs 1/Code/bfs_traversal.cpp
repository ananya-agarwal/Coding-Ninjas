//code assuming connected graph
// #include <iostream>
// #include<queue>

// using namespace std;

// void print(bool **edges, int n, int sv)
// {
//     if(n == 0)
//         return;
    
//     bool *visited = new bool[n];
//     for(int i=0;i<n;i++)
//         visited[i] = false;
    
// 	queue<int> q;
    
//     q.push(sv);
//     visited[sv] = true;
//     while(!q.empty())
//     {
//         int currentVertex = q.front();
//         q.pop();
//         cout<<currentVertex<<" ";
        
//         for(int i=0;i<n;i++)
//         {
//             if(edges[currentVertex][i] == 1)
//             {
//                 if(!visited[i])
//                 {
//                 	q.push(i);
//                     visited[i] = true;
//                 }
//             }
//         }
//     }
//     delete [] visited;
// }

// int main() 
// {
//     // Write your code here
  
//     int n,e;
//     cin>>n>>e;
    
//     bool **edges = new bool*[n];
    
//     for(int i=0;i<n;i++)
//     {
//         edges[i] = new bool[n];
//         for(int j=0;j<n;j++)
//         {
//             edges[i][j] = false;
//         }
//     }
    
//     for(int i=0;i<e;i++)
//     {
//         int s,f;
//         cin>>f>>s;
//         edges[f][s]=true;
//         edges[s][f]=true;
//     }

//     print(edges, n, 0);
// }

//code for disconnected graph 
//approach: visited array check karlo agar vahan koi bhi unvisited mil gaya 
//usse vapas printing start krdo

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// void printDFS(int **edges,int n,int sv,bool *visited)
// {
//     cout<<sv<<endl;
//     visited[sv]=true;
//     for(int i=0;i<n;i++)
//     {
//         if(i == sv)
//             continue;
//         if(edges[sv][i]==1)
//         {
//             if(visited[i])
//                 continue;
//             printDFS(edges,n,i,visited);
//         }
//     }
// }

void printBFS(int **edges,int n,int sv,bool *visited)
{
    queue<int> q;
    
    q.push(sv);
    visited[sv] = true;
    while(!q.empty())
    {
        int currentVertex = q.front();
        q.pop();
        cout<<currentVertex<<" ";
        
        for(int i=0;i<n;i++)
        {
            if(edges[currentVertex][i] == 1)
            {
                if(!visited[i])
                {
                	q.push(i);
                    visited[i] = true;
                }
            }
        }
    }
}

void bfs(int **edges, int n)
{
    bool *visited = new bool[n];
    for(int i=0;i<n;i++)
        visited[i]=false;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
            printBFS(edges,n,i,visited);
    }
    delete [] visited;
}

// void dfs(int **edges, int n)
// {
//     bool *visited = new bool[n];
//     for(int i=0;i<n;i++)
//         visited[i]=false;
//     for(int i=0;i<n;i++)
//     {
//         if(!visited[i])
//             printDFS(edges,n,i,visited);
//     }
//     delete [] visited;
// }

int main() 
{
    // Write your code here
    int n,e;
    cin>>n>>e;
    int **edges=new int*[n];
    for(int i=0;i<n;i++)
    {
        edges[i]=new int[n];
        for(int j=0;j<n;j++)
        {
            edges[i][j]=0;
        }
    }

    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        edges[a][b]=1;
        edges[b][a]=1;
    }
    

    //dfs(edges,n);
    bfs(edges,n);
    
    for(int i=0;i<n;i++)
    	delete[] edges[i];
    delete[] edges;
    
}


