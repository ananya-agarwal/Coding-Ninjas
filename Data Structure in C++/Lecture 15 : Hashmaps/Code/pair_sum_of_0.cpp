#include<unordered_map>
int pairSum(int *arr, int n)
{
    int count = 0;
    unordered_map<int, int> ump;
    
    for(int i = 0; i < n; i++)
    {
        if(ump.count(-arr[i]) > 0)
            count += ump[-arr[i]];
        
        ump[arr[i]]++;
    }
    return count;
}
