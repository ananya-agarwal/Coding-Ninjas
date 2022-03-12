void helper(int input[], int n, int output[], int m)
{
    if(n == 0)
    {
        for(int i=0;i<m;i++)
            cout<<output[i]<<" "; //first newoutput vala is copied to output and then it is displayed sath hi
        cout<<endl;  //and then output from the func call is copied to output upper(overwrte) and then it is displayed
    }
    if(n > 0)
    {
        int newOutput[m+1];
        for(int k=0;k<m;k++)
        	newOutput[k] = output[k];
    
        newOutput[m] = input[0];
        helper(input+1,n-1,newOutput,m+1);
        helper(input+1,n-1,output,m);
    }
}
void printSubsetsOfArray(int input[], int size) 
{
    int output[1000]; 
    int m=0;
	helper(input,size,output,m);
}

