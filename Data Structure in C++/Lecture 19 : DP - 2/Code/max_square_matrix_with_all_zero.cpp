#include<bits/stdc++.h>

/*
approach: kyuki hume 0 count krne hai that is they r of use fr us
thus 0(as value) jahan ha vahan 1 (as count) and vice-versa daaldo
*/

int findMaxSquareWithAllZeros(int **arr, int n, int m)
{
	//Write your code here
    int dp[n][m];
	int ans=0;
    
    for(int i=0;i<n;i++)
    {
        dp[i][0] = (arr[i][0]?0:1);
        ans = max(ans, dp[i][0]);
    }
       
    for(int i=0;i<m;i++)
    {
        dp[0][i] = (arr[0][i]?0:1);
        ans = max(ans, dp[0][i]);
    }
       
    
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(arr[i][j] == 1)
                dp[i][j] = 0;
            
            else
            {
            	dp[i][j] = 1+min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]));
            	ans = max(ans, dp[i][j]);
            }

        }
    }
    return ans;
}
