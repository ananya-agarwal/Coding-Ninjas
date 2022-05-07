//time complexity: O(n3) by recursion and O(n^2) by DP
#include<vector>
#include<bits/stdc++.h>

int f(vector<vector <int> > &dp,int *p,int s,int e)
{
    //pass dp by reference to append values within the same dp 2D vector
    if(e-s == 1) //single matrix thus mul not needed
        return 0;
    
    if(dp[s][e])
        return dp[s][e];
    
    int ans=INT_MAX;
    for(int k=s+1;k<e;k++)//s+1 kyuki atleast 2 matrices toh ho to mul
    {
        int temp=f(dp,p,s,k)+f(dp,p,k,e)+p[s]*p[k]*p[e];
        ans=min(ans,temp);
    }
    dp[s][e]=ans;
    return ans;
}


int matrixChainMultiplication(int* arr, int n) 
{
    // Write your code here
    vector <vector <int> > dp(n,vector<int>(n,0));
    // We create a 2D vector containing "n"
    // elements each having the value "vector<int> (m, 0)" 
    // vector<int> (m, 0)" means a vector having "m"
    // elements each of value "0"
    
    int ans=f(dp,arr,0,n);
    return ans;
}
