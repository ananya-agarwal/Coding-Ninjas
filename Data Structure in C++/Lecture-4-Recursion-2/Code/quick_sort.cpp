
int partition(int input[],int start, int end)
{
    int pivot = input[start];
    int CountSmallIndex = 0;
    for(int i=start;i<=end;i++)
    {
        if(input[i] < pivot)
            CountSmallIndex++;
    }
    int PivotIndex = start + CountSmallIndex;
    
    int temp;
    temp = input[PivotIndex];
    input[PivotIndex] = pivot;
    input[start] = temp;
    
    int i = start;
    int j = end;
    while(i<PivotIndex || j > PivotIndex)
    {
    	if(input[i] < pivot)
        	i++;
        else if(input[j] >= pivot)
        	j--;
    	else
    	{
            int temp1 = input[i];
            input[i] = input[j];
            input[j] = temp1;
            i++;
            j--;
    	}
    }
    return PivotIndex;
}
void helper(int input[], int start, int end)
{
    if(start >= end)
        return;
    else
    {
        int c = partition(input,start,end);
        helper(input,start,(c-1));
        helper(input,(c+1),end);
    }
}


void quickSort(int input[], int size) 
{
	helper(input, 0, size - 1);

}
