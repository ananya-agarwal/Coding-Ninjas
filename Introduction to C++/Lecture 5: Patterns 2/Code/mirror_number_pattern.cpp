#include<iostream>
using namespace std;

int main()
{
int n,i=1,u=1,j,k;
cin>>n;
while(i<=n)
{
	k=1;
	while(k <= n-i)
	{
		cout<<" ";
		k++;
	}
	j=1;
	u=1;
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


