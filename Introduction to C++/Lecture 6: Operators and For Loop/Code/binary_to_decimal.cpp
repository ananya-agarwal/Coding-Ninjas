#include<iostream>
using namespace std;

int main() 
{
int n,placeValue=1,dec=0,last_digit;
    cin>>n;
    while(n>0)
    {
        last_digit = n%10;
        dec = dec+(placeValue * last_digit);
        n/=10;
        placeValue*=2;
    }
	cout<<dec;
}
