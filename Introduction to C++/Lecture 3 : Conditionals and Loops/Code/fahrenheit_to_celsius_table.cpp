#include<iostream>
using namespace std;


int main()
{
int s,w,e;
cin>>s>>e>>w;
for(int i=s;i<=e;i+=w)
{
   int ans = (5 * (i-32)/9);
    cout<<i<<"\t"<<ans<<endl;
}
}


