
//memoization
// int editDistance(string s1, string s2, int ** output)
// {
//     int m = s1.size();
//     int n = s2.size();
    
//     if(s1.size() == 0 || s2.size() == 0)
//         return max(s1.size(), s2.size());
    
//     if(output[m][n] != -1)
//         return output[m][n];
    
//     int ans;
//     if(s1[0] == s2[0])
//         ans = editDistance(s1.substr(1), s2.substr(1), output);

//     else
//     {
//         //insert
//         int y = editDistance(s1.substr(1), s2, output) + 1;
//         //delete
//         int z = editDistance(s1, s2.substr(1), output)+1;
//         //replace/update
//         int q = editDistance(s1.substr(1), s2.substr(1), output)+1;

//         ans = min(y, min(z, q));
//      }
//     output[m][n] = ans;
//     return ans;
// }

// int editDistance(string s1, string s2)
// {
//     int m = s1.size()
//     int n = s2.size();
    
// 	int **output = new int*[m+1];
    
//     for(int i=0;i<=m;i++)
//     {
//     	output[i] = new int[n+1];
//         for(int j=0;j<=n;j++)
//             output[i][j] = -1;
//     }  
    
//     return editDistance(s1, s2, output);
// }


//DP
int editDistance(string s1, string s2, int ** output)
{
    int m = s1.size();
    int n = s2.size();
    
    if(s1.size() == 0 || s2.size() == 0)
        return max(s1.size(), s2.size());
    
    if(output[m][n] != -1)
        return output[m][n];
    
    output[0][0] = 0;
    
    for(int i=1;i<=n;i++)
        output[0][i] = i;
    
     for(int i=1;i<=m;i++)
        output[i][0] = i;
    
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s1[m-i] == s2[n-j])
                output[i][j] = output[i-1][j-1];
            else
            {
                int x = output[i-1][j];
                int y = output[i][j-1];
                int z = output[i-1][j-1];
                int MIN = min(x, min(y,z)) + 1;
                output[i][j] = MIN;
            }
        }
    }
    return output[m][n];
}

int editDistance(string s1, string s2)
{
    int m = s1.size();
    int n = s2.size();
    
	int **output = new int*[m+1];
    
    for(int i=0;i<=m;i++)
    {
    	output[i] = new int[n+1];
        for(int j=0;j<=n;j++)
            output[i][j] = -1;
    }  
    
    return editDistance(s1, s2, output);
}
