void trimSpaces(char str[])
{
   int i,c=0;
    for(i=0;str[i] != '\0';i++)
    {
        if(str[i] != ' ')
        {
         	str[c++] = str[i];
        }
    }
   str[c] = '\0';
}
