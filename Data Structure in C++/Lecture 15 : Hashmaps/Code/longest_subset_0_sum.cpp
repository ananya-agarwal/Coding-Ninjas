#include<unordered_map>
int lengthOfLongestSubsetWithZeroSum(int* arr, int n)
{ 
    unordered_map<int,int> m;
    
    int length=0;
    int sum=0;
    
     for(int i=0 ;i<n;i++)
    {
        sum+=arr[i];
        
        if(sum==0)
            length= i+1;
        
		if(m.count(sum)>0)
            length=max(length,i-m[sum]);
        else
            m[sum]=i;
    }
    
    return length;
}
