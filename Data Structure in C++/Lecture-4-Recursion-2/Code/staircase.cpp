int staircase(int n)
{
	if(n == 1 || n == 0) //if standing on the 0 now to reach 0, only possible way is dont move 
        return 1;    // 0 ka base case must kyuki n=3 pr n-3=0 dega thus need base case of n=0
    if(n == 2)
        return 2; //base case of n == 2 lagaya kyuki n=2 pr 2-3 = -1 dedta
    int x = staircase(n-3);
    int y = staircase(n-2);
    int z = staircase(n-1);
        return x+y+z;
}
