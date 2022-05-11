//bfs always gives the shortest path in an undirected and unweighted graph
#include <iostream>
#include <vector>
#include<unordered_map>
#include <queue> 
using namespace std;

vector<int> * getpath( int ** graph , int v , int s ,int e , bool * visited)
{
    queue<int> pn;
    unordered_map<int ,int> m;
    pn.push(s);
    visited[s]=true;

    while(!pn.empty())
    {
        int t= pn.front();        
    	pn.pop();
    
        for(int i=0 ; i<v ;i++)
        {
            if(graph[t][i]==1 && !visited[i])
            { 
                pn.push(i);
                m[i]=t;
                
                visited[i]=true;
                if(i==e)
                {
                    vector<int> * ans = new vector<int>();
                    
                    ans->push_back(e);
                    int x =e;
                    while(m[x]!=s)
                    {
                        ans->push_back(m[x]);
                        x=m[x];
                    }
                    ans->push_back(s);
                    
                    return ans;
                }
            }
        }
        
       
}
     return NULL;
}


int main()
{
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
 
    int s ,e ;
    cin>>s>>e;
  
    vector<int> * ans = getpath(graph , V,s,e,visited);
    if(ans)
    {
        for(int i=0 ;i< ans->size(); i++)
            cout<< ans->at(i) << " ";
    }
    
    delete ans;
    
for(int i=0 ;i<V ;i++)
{
    delete [] graph[i];
}
    delete [] graph;
    
    delete [] visited;
    
  return 0;
}
