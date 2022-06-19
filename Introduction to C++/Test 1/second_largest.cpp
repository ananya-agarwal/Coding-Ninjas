#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include <climits>


int main()
{
int n,y,u,i;
int first = 0, second = -1;
cin>>n;
vector<int> v(n);
for (u = 0; u < n; u++)
cin>>v[u];

sort(v.begin(),v.end());

if(n==0 || n==1)
cout<<INT_MIN;
   
else 
{
    for (i = 1; i < n; i++) 
	{
       
        if (v[i] > v[first]) 
		{
            second = first;
            first = i;
        }
        else if (v[i] < v[first])
		 {
            if (second == -1 || v[second] < v[i])
                second = i;
         }
    }
cout<<v[second];
}
    
}

