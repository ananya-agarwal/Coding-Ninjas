int arrayRotateCheck(int arr[], int n)
{
    if(n == 0)
    	return 0;
    int min = arr[0], min_index;
    for (int i=0; i<n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            min_index = i;
        }
    }
    return min_index; //index of minimum element
}
