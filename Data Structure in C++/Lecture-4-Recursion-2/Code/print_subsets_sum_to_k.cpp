void help(int input[], int size, int k, int output[], int i, int size_out)
{
    if(i == size)
    {
        if(k==0)
        {
            for(int r=0;r<size_out;r++)
                cout<<output[r]<<" ";
            cout<<endl;
        }
        else 
            return;
    }
    else
    {
        int size_new = size_out+1;
        int newOutput[size_new];
        for(int u=0;u<size_out;u++)
            newOutput[u] = output[u];
        newOutput[size_out] = input[i];

        help(input,size,k-input[i],newOutput,i+1,size_new);
        help(input,size,k,output,i+1,size_out);
    }

}

void printSubsetSumToK(int input[], int size, int k) 
{
   int size_out=0;
   int output[size_out],i=0;
   help(input,size,k,output,i,size_out);
}
