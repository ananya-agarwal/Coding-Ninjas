#include<vector>

int beerusWin(vector<int> &dp, int n, int x, int y)
{
    if(n == 1|| n == x || n == y)
        return 1;
    
    if(dp[n] != -1)
        return dp[n];
    
    int ans;
    if(n > x && n > y)
        ans = !beerusWin(dp,n-1,x,y) || !beerusWin(dp,n-x,x,y) || !beerusWin(dp,n-y,x,y);
    
    else if (n<x && n>y)
        ans = !beerusWin(dp,n-1,x,y) || !beerusWin(dp,n-y,x,n);
    
    else if(n>x && n<y)
        ans = !beerusWin(dp,n-1,x,y) || !beerusWin(dp,n-x,x,n);
    
    else
        ans = !beerusWin(dp,n-1,x,y);
    
    dp[n] = ans;
    return ans;      
}

string findWinner(int n, int x, int y)
{
	// Write your code here
    vector<int> dp(n+1,-1);
    int ans = beerusWin(dp, n,x,y);
    
    if(ans)
        return "Beerus";
    else
        return "Whis";
}
