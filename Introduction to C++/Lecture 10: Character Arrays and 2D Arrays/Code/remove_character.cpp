void removeAllOccurrencesOfChar(char input[], char c) 
{
	int i,j=0;
    for(i=0;input[i];i++)
    {
        if(input[i] == c)
        {
            continue;
        }
        else
        {
            input[j] = input[i];
            j++;
        }
    }
    input[j] = '\0';
}
