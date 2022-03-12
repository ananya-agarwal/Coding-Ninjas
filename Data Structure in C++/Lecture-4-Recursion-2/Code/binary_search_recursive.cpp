// input - input array
// size - length of input array
// element - value to be searched
int helper(int input[], int start, int end, int element)
{
    if(start <= end)
    {
        int mid = (start+end)/2;
        if(input[mid] == element)
            return mid;
        if(input[mid] > element)
            return helper(input,start,mid-1,element);
        return helper(input,mid+1,end,element);
    }
	return -1;
}
int binarySearch(int input[], int size, int element)
{
    int start = 0;
    int end = size-1;
    int c= helper(input,start,end,element);
}
