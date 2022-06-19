#include<iostream>
using namespace std;


int main()
{
int i=1,j,k,N,n1,n2;
cin>>N;
n1=(N+1)/2;
n2=N/2;

while(i<=n1)
{
    k=1;
    while(k<=n1-i)
    {
        cout<<" ";
        k++;
    }
    j=1;
    while(j<=(2*i)-1)
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
}

i=n2;
while(i>=1)
{
    k=1;
    while(k<=(n2-i)+1)
    {
        cout<<" ";
        k++;
    }
    j=1;
    while(j<=(2*i)-1)
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
    i--;
}
}

