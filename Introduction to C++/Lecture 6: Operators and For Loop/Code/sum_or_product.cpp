#include<iostream>
using namespace std;

void sum(int n)
{
  int i,s=0;
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    cout<<s;
}

void pro(int n)
{
  int i,p=1;
    for(i=1;i<=n;i++)
    {
        p*=i;
    } 
    cout<<p;
}

int main()
{
int n,c;
    cin>>n;
    cin>>c;
    switch(c)
    {
        case 1:sum(n);
            break;
        case 2:pro(n);
            break;
        default:
            cout<<"-1";
    }
	
}
