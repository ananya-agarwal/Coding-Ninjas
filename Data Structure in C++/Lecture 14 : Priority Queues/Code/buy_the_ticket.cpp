#include<queue>

int buyTicket(int *arr, int n, int k) 
{
    int time=0;
    
	priority_queue<int> pq;
    queue<int> q;
    
    for(int i=0;i<n;i++)
        q.push(i);
    
    for(int i=0;i<n;i++)
        pq.push(arr[i]);
    
    while(q.front()!=k || pq.top() != arr[q.front()])
    {
            if(pq.top() == arr[q.front()] )
            {
                time++;
                q.pop();
                pq.pop();
            }
            else 
            {
          		q.push(q.front());
                q.pop();
            }
    }

    return time+1;
}
