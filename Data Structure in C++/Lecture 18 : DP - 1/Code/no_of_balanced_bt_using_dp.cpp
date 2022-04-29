#include<cmath>
int balancedBTs(int h)
{
    int dp[h+1];
    
    dp[0]=1;
    dp[1]=1;
    
    int mod = (int)(pow(10,9)+7);
        
    for(int i=2;i<=h;i++)
    {
        int temp1 = (int)(((long)(dp[i-1]) * dp[i-1])%mod);
        int temp2 = (int)((2*(long)(dp[i-1]) * dp[i-2])%mod);
        
        dp[i] = (int)((temp1+temp2)%mod);
    }
    
    return dp[h];
}
