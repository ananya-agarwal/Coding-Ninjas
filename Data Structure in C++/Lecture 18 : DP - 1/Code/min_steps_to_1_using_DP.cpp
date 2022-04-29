int countStepsToOne(int n)
{
    int *arr = new int[n+1];
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    
    for(int i=4;i<=n;i++)
    {
        int a=n,b=n;
        if(i%2 == 0)
            a=arr[i/2];
        
        if(i%3 == 0)
            b = arr[i/3];
        
        arr[i] = min(arr[i-1], min(a,b)) + 1;
    }
    return arr[n];
}
