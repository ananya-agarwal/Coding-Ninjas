bool isPermutation(char input1[], char input2[])
{
    int freq[256];
    int flag=0;
    for(int i=0;i<256;i++)
    {
        freq[i] = 0;
    }
    for(int i=0; input1[i]; i++)
    {
        freq[int(input1[i])]+=1; 
    }
    for(int j=0; input2[j]; j++)
    {
        freq[int(input2[j])]-=1;
    }
	for(int k=0; k<256; k++)
    {
        if(freq[k] != 0)
        {
            flag =1;
            break;
        }
        else
            continue;
    }
    if (flag == 0)
		return 1;
    else 
        return 0;
}
