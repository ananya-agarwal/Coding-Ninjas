#include<unordered_map>
int highestFrequency(int *input, int n)
{	 
    unordered_map <int ,int> ourmap;
    for(int i=0 ;i<n ;i++)
            ourmap[input[i]]++;
    
    int maxkey =0;
    int max=0;
   
    for(int i=0;i<n ;i++)
    {
        if(ourmap[input[i]] > max)
        {
            maxkey=input[i];
            max = ourmap[input[i]];
        }
    }
    return maxkey;
}
