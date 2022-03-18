int findDuplicate(int *a, int n)
{
	int sum=0,sum1=0;
    for(int i=0;i<n;i++)
        sum += a[i];
    for(int j=0;j<=n-2;j++)
        sum1 += j;
    int diff = sum - sum1;
    return diff;
}
