void swapAlternate(int *arr, int n)
{
	int i;
    
    if(n % 2 == 0)
    {
        for(i=0;i<n-1;i+=2)
        {   
            int t;
            t = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = t;
        }  
    }
    else
    {
        int j;
        for(i=0;i<n-2;i+=2)
        {   
            int t;
            //j = arr[n-1];
            t = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = t;
        } 
        //arr[n-1] = j;
    }
}
