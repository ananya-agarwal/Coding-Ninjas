#include<climits>
int findSecondLargest(int *a, int n)
{
    if(n <= 1)
    {
        return INT_MIN;
    }
    int l= INT_MIN;
    int s=INT_MIN;
    
    
    for(int i=0;i<n;i++)
    {

        if(a[i] > l)
        {
            s=l;
            l=a[i];
        }
        
        else if(a[i] >s && a[i] != l)
        {
            s=a[i];
        }
            
    }
    return s;
}


