void rotate(int *input, int d, int n)
{
	int *output = new int[n];
	int j=n-1;
    for(int i=0;i<=n-1;i++)
        output[j--]  = input[i];
	
    for(int y=0,z=n-d-1;y<n-d,z>=0;y++,z--)
    	input[y] = output[z];
    for(int y1=n-d,z1=n-1;y1<n,z1>=n-d;y1++,z1--)
    	input[y1] = output[z1];
}
