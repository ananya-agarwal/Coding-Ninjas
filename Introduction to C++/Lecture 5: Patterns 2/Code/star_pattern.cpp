#include<iostream>
using namespace std;


int main()
{
int i=1,j,k,n;
cin>>n;
while(i<=n)
{
    k=1;
    while(k<=n-i)
    {
        cout<<" ";
        k++;
    }
    j=1;
    while(j<=i)
    {
        cout<<"*";
        j++;
    }
    j=i-1;
    while(j>=1)
    {
       cout<<"*";
        j--;
    }
    cout<<endl;
    i++;
}
}


