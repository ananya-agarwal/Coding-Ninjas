#include<iostream>
using namespace std;

int main()
{
int n,i,u,j,t,z,x;
cin>>n;
i=n;
while(i>0)
{
	j=i;
	u=1;
    while(j>0)
    {
        cout<<u;
        u++;
        j--;
    }
int	p=2;
	while(p<=(n-i)+1)
	{
		cout<<"*";
		p++;
	}
int	v=2;
	while(v<=(n-i)+1)
	{
		cout<<"*";
		v++;
	}	
	j=i;
	x=i;
	while(j>0)
	{
		cout<<x;
		j--;
		x--;
	}
cout<<endl;
i--;
}
}

