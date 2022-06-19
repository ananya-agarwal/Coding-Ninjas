bool checkMember(int n)
{
    int a=0,b=1,sum=0;

        while(n > sum)
        {
            sum = a+b;
            a=b;
            b=sum;   
        }
    if(n == sum || n == 0)
    	return true;
    else
    	return false;
    

}
