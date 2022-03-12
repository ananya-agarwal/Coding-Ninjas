void removeConsecutiveDuplicates(char *input) 
{
    if(input[0] == '\0')
        return;
	removeConsecutiveDuplicates(input+1);

    if(input[0] == input[1])
    {
        int k=1;
        for(;input[k];k++)
            input[k] = input[k+1];
        input[k-1] = '\0';
    }
}
