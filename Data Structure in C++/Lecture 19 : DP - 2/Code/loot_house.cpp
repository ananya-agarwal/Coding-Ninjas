//brute force recursion
// int maxMoneyLooted(int *arr, int n)
// {
//    if(n<=0) 
//        return 0;
    
//    int a = maxMoneyLooted(arr+2,n-2);
//    int b = maxMoneyLooted(arr+1,n-1);
    
//     return max(a+arr[0] , b);
// }

//DP
// int maxMoneyLooted(int arr[], int n, int*  dp)
// {
//     dp[0]=arr[0];
//     dp[1]=max(arr[0],arr[1]);
    
//     for(int i=2 ;i< n ;i++)
//         dp[i]=max(dp[i-1],dp[i-2]+arr[i]);

//     return dp[n-1];
// }

// int maxMoneyLooted(int arr[], int n)
// {
//     int  dp[n];   
// 	return maxMoneyLooted(arr,n, dp);
// }

//memoization
int maxMoneyLooted(int *arr, int n, int *dp)
{
   if(n<=0) 
       return 0;
    
    if(dp[n-1] != -1)
        return dp[n-1]; 
        
   int a = maxMoneyLooted(arr+2,n-2,dp);
   int b = maxMoneyLooted(arr+1,n-1,dp);
    
    dp[n-1] = max(a+arr[0] , b);
    return dp[n-1];
}

int maxMoneyLooted(int *arr, int n)
{
    int dp[n];
    
    for(int i=0;i<n;i++)
        dp[i] = -1;
    
    return maxMoneyLooted(arr,n,dp);
}



