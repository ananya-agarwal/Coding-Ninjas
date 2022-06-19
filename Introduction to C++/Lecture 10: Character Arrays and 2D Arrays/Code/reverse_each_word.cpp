void reverseEachWord(char input[])
{
  int i,j,k,t,u;
    i=j=k=t=u=0;
    while(input[u])
        u++;
    input[u] = ' ';
    for(i=0;input[i];i++)
    {
        if(input[i] == ' ')
        {
            t=j;
            j=i+1;
            k=i-1;
            while(t < k)
            {
                char y;
                y = input[t];
                input[t] = input[k];
                input[k] = y;
                t++;
                k--;
            }
        }
    }
    input[u] = '\0';
    
}
