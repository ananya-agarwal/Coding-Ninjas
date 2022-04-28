#include<iostream>
using namespace std;

int sum(int *arr, int n, int k, int index)
{
 	if(index == n)
    {
        if(k == 0)
            return 1;
        
        return 0;
    }
    
    int count=0;
    if(k-arr[index] >= 0)
        count += sum(arr,n,k-arr[index],index+1);
    
    count+=sum(arr,n,k,index+1);
    return count;
}

int main()
{
    int t,n,k;
    cin>>t;
    while(t>0)
    {
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int ans = sum(arr,n,k,0);
        cout<<ans<<endl;
        t--;
    }
}
