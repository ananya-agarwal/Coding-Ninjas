#include<iostream>
using namespace std;

int main()
{

    // Write your code here.
    char c;
    cin>>c;
    int ans = 0;
    if(c >= 'A' && c <= 'Z')
        ans = 1;
    else
    if(c >= 'a' && c <= 'z')
        ans = 0; 
    else
        ans = -1;
    cout<<ans<<endl;
}
