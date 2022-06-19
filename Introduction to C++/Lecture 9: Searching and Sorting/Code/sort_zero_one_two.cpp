void sort012(int *a, int n)
{
    int i=0,n1=0,n2=n-1;
   while(i<=n2)
    {
        if(a[i] == 0)
        {
            int t = a[i];
            a[i] = a[n1];
            a[n1] = t;
            n1++;
            i++;
        }
        else
        if(a[i] == 2)
        {
            int r = a[i];
            a[i] = a[n2];
            a[n2] = r;
            n2--;       
        }
      else
          i++;
    }
    
}
