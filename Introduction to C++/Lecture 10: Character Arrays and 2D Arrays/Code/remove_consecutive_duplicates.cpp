void removeConsecutiveDuplicates(char s[])
{
    int j=1,i;
    char lastchar;
    lastchar = s[0];
    for(i=1;s[i];i++)
    {
        if(s[i] == lastchar)
            continue;
        else
        {
            s[j] = s[i];
            lastchar = s[j];
            j++;
        }
    }
    s[j]='\0';
}
