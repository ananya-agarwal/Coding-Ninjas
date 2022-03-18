/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

Donât print the subsets, just save them in output.
***/

int subsetSumToK(int input[], int n, int output[][50], int k) 
{
   int so1[10000][50];
   int so2[10000][50];
    
    //return 0: returning false from a function
   //return 1: returning true from a function
    
    if(n == 0)
    {
        if(k==0)
        {
        output[0][0] = 0; // 0 sum possible only when 0 elemts le i.e. length 0 
        return 1; 
        }
        else
        {
            return 0; // 0 elemnts se sum > 0 is not posbble 
        }
    }
    
    int count1 = subsetSumToK(input+1,n-1,so1,k);
    int count = subsetSumToK(input+1,n-1,so2,k-input[0]);
    
    
    for(int i=0;i<count1;i++)
    {
        for(int j=0;j<so1[i][0]+1;j++)
        	output[i][j]=so1[i][j];
    }	
    
    for(int i=0;i<count;i++)
    {
        output[count1+i][0]=so2[i][0]+1;
        output[count1+i][1]=input[0];
    }

    for(int i=0;i<count;i++)
    {
        for(int j=1;j<=output[count1+i][0];j++)
            output[count1+i][j+1]=so2[i][j];
    }
	return count+count1;   
}



