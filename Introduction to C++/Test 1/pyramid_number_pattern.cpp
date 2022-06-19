#include<iostream>
using namespace std;

int main()
{
int i,j,k,n,u,v;
cin>>n;
while(i<=n)
{
	k=1;
    while(k<=n-i)
    {
        cout<<" ";
        k++;
    }
    j=1;
    u=i;
    while(j<=i)
    {
        cout<<u;
        u--;
        j++;
    }
    j=1;
	v=2;
    while(j<=(i-1))
    {
        cout<<v;
        j++;
        v++;
    }
    
	i++;
    cout<<endl;
}
}
