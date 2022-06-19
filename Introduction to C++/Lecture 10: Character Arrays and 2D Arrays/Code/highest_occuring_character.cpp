char highestOccurringChar(char input[])
{
    int i,freq[256],max,j;
    char ans;
    for(i=0;i<256;i++)
        freq[i] = 0;
    for(i=0;input[i];i++)
        freq[int(input[i])] += 1;
    ans = input[0];
    max = freq[int(ans)];
    for(j=1;input[j];j++)
    {
        if(input[j] != ans && freq[int(input[j])] > max)
        {
            ans = input[j];
            max = freq[int(ans)];
        }
    }
    return ans;
}
