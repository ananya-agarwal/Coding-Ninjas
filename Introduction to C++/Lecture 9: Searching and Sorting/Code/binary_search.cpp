int binarySearch(int *a, int n, int x)
{
  int beg=0,mid,end=n-1;
  if(n == 0)
  	return -1;
  while(beg <= end)
  {

      mid = beg + ((end-beg)/2);
      if(x == a[mid])
          return mid;
      if(x>a[mid])
          beg = mid + 1;
      else
          end = mid - 1;
  }
    return -1;
}

