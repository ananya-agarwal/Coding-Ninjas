//dynamic programming
int minCount ( int n)
{
    if (sqrt (n) -floor(sqrt(n))==0)  
        return 1;
    
    int arr[n+1];
    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    arr[3]=3;
    
    for(int i=4 ;i<=n ;i++)
    { 
        arr[i] = i; 
  
        for (int x = 1; x <= sqrt(i); x++) 
        { 
            int temp = x * x; 
            if (temp > i) 
                break; 
            else
                arr[i] = min(arr[i], 1 + arr[i - temp]); 
        }
    }
    return arr[n];
}


//memoization

// int mincount ( int n , int *arr)
// {
//     if(sqrt(n) -floor(sqrt(n))==0)
//     {  
//         arr[n]=1;
//         return arr[n];
//     }
    
//     if(n <=3)
//     {  
//         arr[n]=n;
//         return n;
//     }
    
//     int ans = n;
    
//     if(arr[n] != 0) 
//         return arr[n];
    
//     for(int i=1 ; i*i<=n ; i++)
//     	arr[n] =ans= min(ans , 1 + mincount(n-i*i,arr));
    
//     return arr[n];
// }

// int minCount(int n)
// {
//     int arr [n+1];
    
//     for(int i=0 ;i<=n ;i++)
//         arr[i]=0;
    
//     return mincount(n , arr); 
// }


// brute force 

// int minCount(int n)
// {
//     if( sqrt(n) -floor(sqrt(n)) == 0) //the number n is a perfect square of a number
//        return 1;
    
//     if(n <=3)
//         return n;
    
//    int ans = n;//assigning the highest number possible
//    for(int i=1 ; i*i<=n ; i++)
//       ans = min(ans , 1 + minCount(n-i*i));
    
//    return ans;
// }
