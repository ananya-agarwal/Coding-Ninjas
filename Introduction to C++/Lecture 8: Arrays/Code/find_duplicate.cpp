int duplicateNumber(int *a, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int flag = 0;
        for(j=0;j<n;j++)
        {
            if((a[i] == a[j]) && (j != i))
                flag=1; 
        }
             if(flag == 1)
             return a[i];  
    }
}
