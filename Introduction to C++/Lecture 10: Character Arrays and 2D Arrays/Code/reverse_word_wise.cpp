#include<bits/stdc++.h>

char *rev(char a[],int s, int e)
{
    int i,j = e;
    for(i=s;i<j;i++)
    {
        char t;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        j--;
        
    }
}

void reverseStringWordWise(char input[]) 
{
    int s=0;
    int n = strlen(input);
	rev(input, 0, n-1);
    int i;
    for(i=0;input[i];i++)
    {
        if(input[i] == ' ')
        {
            int j = i-1;
            rev(input,s,j);
            s=i+1;
        }
        if(input[i+1] == '\0')
        {
            rev(input,s,i);
        }
          
    }

        

}

  
