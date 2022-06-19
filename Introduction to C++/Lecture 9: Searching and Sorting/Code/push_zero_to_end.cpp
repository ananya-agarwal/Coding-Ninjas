void pushZeroesEnd(int *A, int n)
{
int k = 0;

    for (int i = 0; i < n; i++)
    {
 
        if (A[i] != 0) 
        {
            A[k] = A[i];
            k++;
        }
    }

    for (int i = k; i < n; i++) {
        A[i] = 0;
    }
	
}


/*
	int i=0,j=0,b[n] = {0};
    while(i<n)
    {
        if(a[i] != 0)
        {
            b[j++] = a[i];
        }
        i++;
    }
    
    int y;
    for(y=0;y<n;y++)
    {
    	a[y] = b[y];
	}
   
  
*/
