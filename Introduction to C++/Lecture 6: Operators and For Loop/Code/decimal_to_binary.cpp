#include<iostream>
using namespace std;

int main() 
{
	
	long last_digit,n,rem,ans=0,placeValue=1;
    cin>>n;
    while(n>0)
    {
        rem = n % 2;
        ans += placeValue*rem;
        n=n/2;
        placeValue*=10;
    }
    cout<<ans;
}
