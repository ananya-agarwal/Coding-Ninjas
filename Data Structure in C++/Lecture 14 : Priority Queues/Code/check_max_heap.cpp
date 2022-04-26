bool isMaxHeap(int arr[], int n)
{
//test cases are not checking for CBT
   for(int child=1; child<n ;child++)
    {
        int parent = (child-1)/2;
        if(arr[parent]<arr[child])
            return false;
    }
    //by default true is returned
}
