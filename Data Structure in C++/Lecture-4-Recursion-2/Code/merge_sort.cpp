
void merge(int input[], int si, int mid, int ei,int output[])
{
    int k=si,i=si,j=mid+1;
    while(i<=mid && j<=ei)
    {
        if(input[i] <= input[j])
            output[k++] = input[i++]; 
        else
         output[k++] = input[j++];
    }
    while(i <= mid)
        output[k++] = input[i++];
    while(j<=ei)
        output[k++] = input[j++];
   
    for(int u=0;u<=ei;u++)
    	input[u] = output[u];
}


void helper(int input[], int si, int ei,int output[])
{
    if(si >= ei)
        return;
    else
    {
        int mid = (si+ei)/2;
        helper(input,si,mid,output);
        helper(input,mid+1,ei,output);
        merge(input,si,mid,ei,output);
    }
}
void mergeSort(int input[], int size)
{
    int si = 0;
    int ei = size - 1;
    int output[size];
	helper(input,si,ei,output);
        
}
