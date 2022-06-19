/* input - Input String
*  output - Save the result in the output array (passed as argument). You don’t have to 
*  print or return the result
*/
void minLengthWord(char input[], char output[])
{
	int i,min=1000000,c=0,index=0,k,u;
    for(i=0;input[i];i++)
    {
        if(input[i] == ' ')
        {
            if(c < min)
            {
                min = c;
                index = i-min;

            }
            c=0;
        }
		else
            c++;
    }
    
        k = index,u=0;
        while(k < (index + min))
        {
        output[u] = input[k];
        u++;
        k++;
        }
        output[k] = '\0';

}

