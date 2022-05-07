//brute force recursion
// int minCostPath(int **input, int m, int n, int x, int y)
// {
//      if(x == m-1 && y == n-1)
//             return input[x][y];

//      if(x >= m || y >= n)
//      	return INT_MAX;

//      int a = minCostPath(input, m, n, x+1, y);
//      int b = minCostPath(input, m, n, x, y+1);
//      int c = minCostPath(input, m, n, x+1, y+1);

//      return(input[x][y] + min(a, min(b,c)));
// }

// int minCostPath(int **input, int m, int n)
// {
// 	minCostPath(input, m, n, 0,0);
// }







//memoization
// int minCostPath(int ** input, int m, int n, int x, int y, int ** output)
// {
//      if(x == m-1 && y == n-1)
//             return input[x][y];

//      if(x >= m || y >= n)
//      	return INT_MAX;

//      if(output[x][y] != -1)
//          return output[x][y];
    
//      int a = minCostPath(input, m, n, x+1, y, output);
//      int b = minCostPath(input, m, n, x, y+1, output);
//      int c = minCostPath(input, m, n, x+1, y+1, output);

//      int ans = input[x][y] + min(a, min(b,c));
//      output[x][y] = ans;
//      return ans;
// }

// int minCostPath(int ** input, int n, int m)
// {
//     int ** output = new int*[n];
//     for(int i=0;i<n;i++)
//         output[i] = new int[m];
    
//     for(int i=0;i<n;i++)
//         for(int j=0;j<m;j++)
//             output[i][j] =-1;
            
//     return(minCostPath(input, n,m,0,0,output));
// }



//DP
int minCostPath(int **input, int m ,int n)
{
    int ** output = new int*[m];
    for(int i=0;i<m;i++)
        output[i] = new int[n];
    
    output[m-1][n-1] = input[m-1][n-1];
    
    for(int i=m-2;i>=0;i--)
        output[i][n-1] = input[i][n-1] + output[i+1][n-1];
    
    for(int j=n-2;j>=0;j--)
        output[m-1][j] = input[m-1][j] + output[m-1][j+1];
    
    for(int i=m-2;i>=0;i--)
        for(int j=n-2;j>=0;j--)
            output[i][j] = input[i][j] + min(output[i][j+1], min(output[i+1][j], output[i+1][j+1]));
    
    return output[0][0];
}
