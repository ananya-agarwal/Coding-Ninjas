int tripletSum(int *a, int n, int x)
{
    int i,j,c=0,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[i] + a[j] + a[k] == x)
                c++; 
            }
        }
    }
	return c;
}
