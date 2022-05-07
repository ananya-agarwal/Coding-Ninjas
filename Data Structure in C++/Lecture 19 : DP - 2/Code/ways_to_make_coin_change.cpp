//brute force: time limit exceeded

// int countWaysToMakeChange(int denominations[], int numDenominations, int value)
// {
// 	if(value == 0)
//         return 1;
    
//     if(numDenominations != 0)
//     {
//         if(value > denominations[0])
//         {
//         	int x = countWaysToMakeChange(denominations, numDenominations, value-denominations[0]);
//             int y = countWaysToMakeChange(denominations+1, numDenominations-1, value);
//             return x+y;
//         }
//         else
//             return 0;
//     }
// }


//DP
// int countWaysToMakeChange( int S[], int m, int n )
// {
//     int i, j, x, y;
//     int table[n + 1][m];
     
//     for (i = 0; i < m; i++)
//         table[0][i] = 1;
//     //1 tareeka hai ki kuch bhi mat karo agar required sum is 0

//     for (i = 1; i < n + 1; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             // Count of solutions including S[j]
//             x = (i-S[j] >= 0) ? table[i - S[j]][j] : 0;
 
//             // Count of solutions excluding S[j]
//             y = (j >= 1) ? table[i][j - 1] : 0;
// j>=1 means j=0 i.e. first coin is ignored
 
//             // total count
//             table[i][j] = x + y;
//         }
//     }
//     return table[n][m - 1];
// }
