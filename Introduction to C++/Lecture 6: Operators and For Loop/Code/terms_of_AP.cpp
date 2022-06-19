#include<iostream>
using namespace std;

int main() 
{
	int x,i,k=1,ans=0;
    cin>>x;
    for(i=1;k<=x;i++)
    {
    ans = (3*i)+2;
    if(ans % 4 != 0)
    {
        cout<<ans<<" ";   
    	k++;	
	}
	}
return 0;	
}
