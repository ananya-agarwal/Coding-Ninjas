int* stockSpan(int *price, int size)  
{
    int k=0;
	int *output = new int[size];
    for(int i=0;i<size;i++)
    {
        int count = 1;
        for(int j=i;j>0;j--)
        {
          
            if(price[i] <= price[j-1])
                break;
            else
                count++;
        }
        output[k++] = count;
    }
    return output;
}
