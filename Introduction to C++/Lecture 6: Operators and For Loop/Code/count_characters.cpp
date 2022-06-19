#include<iostream>
using namespace std;

int main()
{
	char ch;
    int c1=0,c2=0,c3=0;
    ch=cin.get();
    while(ch != '$')
    {
        if((ch >= 'a' && ch <= 'z'))
            c1++;
        if(ch >= '0' && ch <= '9')
        	c2++;
        if(ch == ' ' || ch == '\t' || ch == '\n')
        	c3++;
		ch = cin.get();
    }
	
    cout<<c1<<" "<<c2<<" "<<c3;
}


