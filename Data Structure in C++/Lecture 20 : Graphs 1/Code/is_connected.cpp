//since bfs and dfs are O(E) i.e. O(n^2) so if we compare every vertex with every other vertex,
//complexity would have been of O(n^4) thus, 1 hi vertex se sab ke connection 
//check krlo to make it O(n^2)

#include <iostream>
#include<queue>
using namespace std;

void DFS(int ** graph, int n, int sv, bool *visited)
{
	visited[sv] = true;
    for(int i=0;i<n;i++)
    {
        if(graph[sv][i] && !visited[i])
        {
            if(i == sv)
                continue;
            DFS(graph,n,i,visited);
        }
    }
}

int main() {
    int V, E;
    cin >> V >> E;

    
     int** graph = new int * [V];
    for( int i=0 ;i<V ;i++)
    {
        graph[i]= new int[V];
        for( int j=0 ;j<V ;j++)
            graph[i][j]=0;

    }
    for (int i=0 ;i<E ;i++)
    {
		int x ,y ;
        cin>>x>>y ;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    bool * visited = new bool[V];
    for ( int i=0 ;i<V ;i++)
        visited[i]=false;
 
    
    DFS(graph ,V, 0 , visited);
    
    
    int i=0;
   for(i =0 ; i<V ;i++)
   {    
       if(!visited[i])
       {
           cout<<"false";
            break;
       }
   }
    
    if(i==V)
        cout<< "true";
    
for(int i=0 ;i<V ;i++)
{
    delete [] graph[i];
}
    delete [] graph;
    
    delete [] visited;
    
  return 0;
}
