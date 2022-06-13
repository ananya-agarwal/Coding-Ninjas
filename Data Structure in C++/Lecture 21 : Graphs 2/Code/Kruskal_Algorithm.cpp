#include <iostream>
using namespace std;
#include<bits/stdc++.h>

class edge
{
    public:
    
    int s;//source
    int d;//destination
    int w;//weight

    edge(){}
    edge(int s,int d ,int w)
    {
        this->s=s;
        this->d=d;
        this->w=w;
    }
};


bool comp(edge a , edge b)
{
		return a.w < b.w;
    //agar phele vali value kam ha toh increasing order me sort hoga
}

int findparent(int * parent ,int v)
{
    if(parent[v]==v)
    	return v;
    
    return findparent(parent,parent[v]);
}

void kruskalMST(edge * input, int v , int e)
{
    //sort in ascending order on basis of weights of edges
    sort(input,input+e, comp);
    //comp ko internally hi input array ke saare elemnts mil gaye ha 
    //function me jaake, it is just comparing 2-2 krke elements ko on the basis of weight and
    //returning true/ false and apne aap hi sort ho rha ha input array poora hi on the basis of weight
    
    int* parent =new int[v];
    for(int i=0 ;i <v ;i++)
        parent[i]=i;
    
    edge *output=new edge[v-1];
    
    int count=0;
    int i=0;
    while(count != v-1)
    {
        edge currentEdge = input[i];
        
        int parent_s=findparent(parent,currentEdge.s);
        int parent_d=findparent(parent,currentEdge.d);
        
        if(parent_s != parent_d)
        {
            output[count]=currentEdge;
            count++;
            
            parent[parent_s]= parent_d;
        }
        i++;
        
    }
    
    //print
    for(int i=0 ; i< v-1 ;i++ )
    {
        if( output[i].s< output[i].d)
            cout<<output[i].s<<" "<< output[i].d<<" "<<output[i].w<< endl;
        else
           cout<<output[i].d<<" "<< output[i].s<<" "<<output[i].w<< endl;
    }
    
    delete [] output;

    delete [] parent;
}
int main()
{
    int V, E;
    cin >> V >> E;

    // input graph
    edge *input = new edge[E];
    //edge class ka object ek array ha 
    
    for(int i= 0; i<E ;i++)
    {  
        int s,d,w;
        cin>>s>>d>>w;
        input[i]=edge(s,d,w);
    }
    
	
    kruskalMST(input,V,E);
    
    delete [] input;

    return 0;
}
