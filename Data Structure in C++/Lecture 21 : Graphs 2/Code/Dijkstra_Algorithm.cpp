
#include<climits>
#include <iostream>
using namespace std;

int findMinVer(int* weight ,bool *visited ,int v)
{
    int MinVertex=-1;
    for(int i=0 ;i<v ;i++)
        if(!visited[i] && (MinVertex==-1 ||weight[i] < weight [MinVertex]))
            //first case ke liye MinVertex=-1 chalega
            //for rest of the cases toh minVertex hi update ho chuka hoga
            MinVertex=i;
    
    return  MinVertex;
}


void Dijkstra(int **graph, int v)
{
   bool*visited = new bool[v];
   int * weight = new int[v];
    
    for(int i=0 ;i<v;i++)
    {
		visited[i]=false;
        weight[i]=INT_MAX;
    }
    weight[0]=0;  //strting from 0;
    
    for(int i=0 ;i<v-1;i++)
    {
       int minvertex= findMinVer(weight,visited,v);
        visited[minvertex]=true;
        
        for(int j=0 ;j<v;j++)
        {
           if(!visited[j] && graph[minvertex][j] && weight[j] >(graph[minvertex][j] + weight[minvertex]))
               weight[j]=graph[minvertex][j] + weight[minvertex];
        }
    }
    for(int i=0 ;i<v ;i++)
        cout<<i<<" "<< weight[i]<<endl;
    
    delete []visited ;
    delete [] weight;
}
    

int main()
{
  int V, E;
  cin >> V >> E;
 
    //input a graph
 int ** graph =new int* [V];
    for(int i=0 ;i<V ;i++)
    {
        graph[i]=new int [V];
        for(int j=0 ;j<V;j++)
            graph[i][j]=0;
    }
    
    for(int i =0 ;i<E ;i++)
    {
     	int s,e,w;
        cin>>s>>e>>w;
        graph[s][e]=w;
        graph[e][s]=w;
    }

    Dijkstra(graph,V);
  return 0;
}

