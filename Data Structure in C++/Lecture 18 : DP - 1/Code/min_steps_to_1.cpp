//brute force..recursion

// int countMinStepsToOne(int n)
// {
//     int a,b=INT_MAX,c=INT_MAX;
    
//     if(n==1)
//         return 0;
    
//     a = countMinStepsToOne(n-1);
    
//     if(n%2 == 0)
//         b = countMinStepsToOne(n/2);
    
//     if(n%3 == 0)
//         c = countMinStepsToOne(n/3);
    
//     return 1+min(a, min(b,c));
// }

//memoization
// int helper(int n, int *ans)
// {
//     int a,b=INT_MAX,c=INT_MAX;
    
//     if(n==1)
//         return 0;

//     if(ans[n] != -1)
//         return ans[n];

//     a = helper(n-1, ans);
    
//     if(n%2 == 0)
//         b = helper(n/2, ans);
    
//     if(n%3 == 0)
//         c = helper(n/3, ans);
    
//     ans[n] = 1+min(a, min(b,c));
//     return ans[n];
// }

// int countMinStepsToOne(int n)
// {
// 	int *ans = new int[n+1];
//     for(int i=0;i<n;i++)
//         ans[i]=-1;
    
//     return(helper(n,ans));
// }


//DP

int countMinStepsToOne(int n)
{
    int *arr = new int[n+1];
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    
    for(int i=4;i<=n;i++)
    {
        int a=n,b=n;
        if(i%2 == 0)
            a=arr[i/2];
        
        if(i%3 == 0)
            b = arr[i/3];
        
        arr[i] = min(arr[i-1], min(a,b)) + 1;
    }
    return arr[n];
}
