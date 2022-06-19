#include<iostream>
using namespace std;


int main()
{
int i,sum,j,m,n;
    cin>>m>>n;
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(j=0;j<n;j++)
    {
        sum=0;
        for(i=0;i<m;i++)
        {
         sum+=a[i][j];   
        }
        cout<<sum<<" ";
    }  
}


