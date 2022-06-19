void rotate(int *a, int d, int n)
{
 	int j,i,r[d],k;
    for(j=0;j<d;j++)
    {
        r[j] = a[j];
    }
    for(i=0;i<n;i++)
    {
         a[i] = a[i+d];
    }
    int u=0;
    for(k=n-d;k<n;k++)
    {
        a[k] = r[u];
        u++;
    }
}


/*
M1: srf ek left shift karo..but first sore the leftmost element in the array..perform same operation d times
M2: starting ke d elemnts store krlo in secndry array 
d se last tak ke elmnts ko ..a[i] = a[i+d] kardo.. then copy from sec to last of a
M3: phle reverse the whole array then n-d reverse amongst themselves then d elents reverse amongst themslves
*/
