#include <unordered_map>

int getPairsWithDifferenceK(int *arr, int n, int k)
{
    unordered_map<int, int> ump;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(k!=0) //varna k=0 vale will be counted twice
                 //thus apply this k!=0 cond atleast once
        	count += ump[arr[i] + k];
        
        count += ump[arr[i] - k];
        
        ump[arr[i]] += 1;
    }
    return count;
}
