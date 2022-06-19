void wavePrint(int **a, int m, int n)
{
 int i,j;
    for(j=0;j<n;j++)
    {
        if(j % 2 == 0)
        {
        	for(i=0;i<m;i++)
        	{
            	cout<<a[i][j]<<" ";
       		} 
            
        }
        else
        {
           for(i=m-1;i>=0;i--)
           {
            cout<<a[i][j]<<" ";
           }  
        }
    }
    cout<<endl;
}
