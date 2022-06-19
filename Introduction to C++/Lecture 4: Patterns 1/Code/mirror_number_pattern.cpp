#include<iostream>
using namespace std;

int main()
{
	int i,j,n;
	cin>>n;
    i=n;
	while(i>=1)
	{
		j=i;
		while(j<=n)
		{
			char startChar='A'+j-1;
			cout<<startChar;
			j++;
		}
		cout<<endl;
    	i--;
	}	
}

