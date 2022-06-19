void insertionSort(int *a, int n)
{
	int i,j,curr;
    for(i=1;i<n;i++)
    {
        curr = a[i];
        for(j=i-1;j>=0;j--)
        {
         if(curr < a[j])
         	a[j+1] = a[j];
        else
            break;
        }
        a[j+1] = curr;
    }
}
