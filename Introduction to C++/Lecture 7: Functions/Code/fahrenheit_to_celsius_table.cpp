#include<bits/stdc++.h>
void printTable(int start, int end, int step)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    for(int i = start;i <= end;i += step)
    {
     	int c = (5 * (i -32))/9; 
        cout<<i<<"\t"<<c<<endl;
    }
    
}


