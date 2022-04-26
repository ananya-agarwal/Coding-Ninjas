#include<queue>
#include<vector>

vector<int> kLargest(int *input, int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> v;
    
    for(int i=0;i<k;i++)
        pq.push(input[i]);
    
    for(int i=k;i<n;i++)
    {
        if(input[i] > pq.top())
        {
            pq.pop();
            pq.push(input[i]);
        }
    }
    
    while(!pq.empty())
    {
        v.push_back(pq.top());
        pq.pop();
    }  
    
    return v;
}
