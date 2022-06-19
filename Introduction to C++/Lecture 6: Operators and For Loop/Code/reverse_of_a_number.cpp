#include<iostream>
using namespace std;

int main()
{
	long int last_digit=0,reverse=0,i,n;
    cin>>n;
    if(n==0)
    cout<<0;
    else
    {
    while(n % 10 == 0)
    n /= 10;
    while(n>0)
    {
        last_digit = n%10;
        reverse = (reverse*10) + last_digit;
        n/=10;
    }
	cout<<reverse;  
    }

}
