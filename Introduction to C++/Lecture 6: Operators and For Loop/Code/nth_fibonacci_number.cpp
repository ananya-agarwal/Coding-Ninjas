#include<iostream>
using namespace std;

int f(int n)
{
    if(n==1 || n==2)
        return 1;
    else
    {
        return(f(n-1) + f(n-2));
    }
}

int main()
{
	int i,n=1,k;
    cin>>n;
        for(i=1;i<=n;i++)
        {
          k = f(i);
        }   
    cout<<k;
}

