void sortZeroesAndOne(int *a, int n)
{
	int i=0,j=n-1;
    while(i < j)
    {
        while(a[i] == 0)
            i++;
        while(a[j] == 1)
                j--;
        if(i<j)
        {
         	int t;
            t = a[i];
            a[i] = a[j];
            a[j] = t;   
        }

    }
}
