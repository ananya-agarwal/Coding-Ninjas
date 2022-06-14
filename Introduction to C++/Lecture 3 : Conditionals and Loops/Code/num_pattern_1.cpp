#include<iostream>
using namespace std;

int main()
{
int n,i=1,u=1,j;
cin>>n;
while(i<=n)
{
	j=1;
    u=i;
    while(j<=i)
    {
        cout<<u;
        u++;
        j++;
    }
cout<<endl;
i++;
}
}


