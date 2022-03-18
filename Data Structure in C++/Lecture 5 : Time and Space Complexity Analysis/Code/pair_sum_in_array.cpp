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
    

int pairSum(int *arr, int n, int num)
{
    int count=0;
	int output[n];
    helper(arr,0,n-1,output);
    int i=0,j=n-1;
    while(i<j)
    {
        int c1=0;
    	if(arr[i] + arr[j] == num)
        {
            if(arr[i] == arr[j])
            {
                c1 = j-i+1;
                count += ((c1-1)*c1)/2;
                return count;
            }
            else
            {

                int count1=1,count2=1;
                while(arr[i] == arr[i+1])
                {
                    i++;
                    count1 ++;
                }

                while(arr[j] == arr[j-1])
                {
                    j--;
                    count2 ++;
                }
                count+=  count1 * count2;
                i++;
                j--;
             }
        }
        else if(arr[i] + arr[j] < num)
            i++;
         else
             j--;
    }
    return count;
}
