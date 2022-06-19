#include<iostream>
using namespace std;

int main()
{
	int i=1,j,n;
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			char startChar='A'+i-1;
			cout<<startChar;
			j++;
		}
		cout<<endl;
    	i++;
	}	
}
