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
    

void intersection(int *arr1, int *arr2, int n, int m) 
{
	int output[n];
    int output1[m];
    helper(arr1,0,n-1,output);
    helper(arr2,0,m-1,output1);
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i] == arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i] > arr2[j]) 
                j++;
        else
            i++;
    }

    
}
