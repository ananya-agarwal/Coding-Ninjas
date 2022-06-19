#include<climits>
int arrayRotateCheck(int *a, int n)
{
   int i=0,k;
    if(n==0)
        return 0;
   int m = INT_MAX;
   for(int i=0;i<n;i++)
   {
       if(a[i] < m)
       {
           m=a[i];
           k=i;
       }
       
   }
    return k;
}
