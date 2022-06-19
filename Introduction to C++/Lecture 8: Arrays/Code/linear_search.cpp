int linearSearch(int *arr, int n, int x)
{
        int j;
        for(j=0;j<n;j++)
        {
            if(arr[j] == x)
                return j;
        }
        return -1;
}
