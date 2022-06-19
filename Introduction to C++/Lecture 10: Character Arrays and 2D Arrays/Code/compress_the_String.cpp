string getCompressedString(string &input)
{
    int c=0,i,j=0;
    string f;
    f+=input[0];
    char d=input[0];
    for(i=0;input[i];i++)
    {
        if(input[i] == d)
        	c++;
        else
        {
            if(c == 1)
            {
                f+=input[i];
                d=input[i];
            }
            else
            {
                f+= (char)(48+c);
	            f+=input[i];
                d=input[i];            
            }
            c=1; 
        }
    }
    if(c>1)
        f+= (char)(48+c);
    return f;
}
