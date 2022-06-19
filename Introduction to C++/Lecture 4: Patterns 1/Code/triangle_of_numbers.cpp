#include<iostream>
using namespace std;


int main()
{
int i=1,j,k,n,u,t,v;
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
        j++;
        u++;
    }
    
    j=1;
	v=(2*i)-2;
    while(j<=(i-1))
    {
        cout<<v;
        j++;
        v--;
    }
    
    cout<<endl;
    i++;
}
}
