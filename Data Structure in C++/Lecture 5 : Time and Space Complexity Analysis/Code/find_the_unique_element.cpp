int findUnique(int *a, int n)
{
    int ans;
	for(int i=0;i<n;i++)
        ans = ans ^ a[i];
    return ans;
}

