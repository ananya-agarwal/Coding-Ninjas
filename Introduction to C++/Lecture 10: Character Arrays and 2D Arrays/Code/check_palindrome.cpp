bool checkPalindrome(char str[]) 
{
 	int i=0,j;
    j=strlen(str)- 1;
    while(i<j)
    {
        if(str[i] != str[j])
            return false;
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
