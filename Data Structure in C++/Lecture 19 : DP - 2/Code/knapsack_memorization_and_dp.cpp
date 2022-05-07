//memoization
int knapsack(int* weight, int* value, int n, int maxWeight, int **dp) 
{
    if(n == 0 || maxWeight == 0)
        return 0;
    
    if(dp[n][maxWeight] != -1)
        return dp[n][maxWeight];
    
    if(maxWeight < weight[0])
         return dp[n][maxWeight] = knapsack(weight+1, value+1, n-1, maxWeight, dp);
    
    else
    {
        int a = knapsack(weight+1, value+1, n-1, maxWeight-weight[0], dp) + value[0]; 
        int b = knapsack(weight+1, value+1, n-1, maxWeight, dp);
        return dp[n][maxWeight] = max(a,b);
    }
}

int knapsack(int* weight, int* value, int n, int maxWeight) 
{
    int **dp = new int *[n+1];

    for (int i = 0; i <= n; i++)
    {
        dp[i] = new int[maxWeight + 1];
        
        for (int j = 0; j <= maxWeight; j++)
            dp[i][j] = -1;
    }

	return knapsack(weight, value, n, maxWeight, dp);
}

