#include<iostream>
using namespace std;

int main()
{
	int i=1,j,n,k;
	cin>>n;
	while(i<=n)
	{
		j=1;
		k=i;
		while(j<=i)
		{
			cout<<k;
			j++;
			k--;
		}
		cout<<endl;
    	i++;
	}	
}
