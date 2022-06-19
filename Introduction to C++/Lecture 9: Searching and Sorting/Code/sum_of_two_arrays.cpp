void sumOfTwoArrays(int *a, int size1, int *b, int size2, int *output)
{
    int size3=max(size1,size2);
    
    int i=size1-1;
    int j=size2-1;
    int k=size3;
    
    int carry=0;
    int sum=0;
    
    while(k>=0)
    {
         sum =carry;
        
        if(i>=0)
        {
            sum+=a[i];
        }
        
        if(j>=0)
        {
            sum+=b[j];
        }
        
        int rem=sum%10;
        int q=sum/10;   
        
        output[k]=rem;
        carry=q;
        
        j--;
        k--;
        i--;
    }
    
    if(carry!=0)
    {
        output[k++]=carry;
    }
    
    return;
}
