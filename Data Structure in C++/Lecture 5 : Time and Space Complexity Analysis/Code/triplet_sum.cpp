int tripletSum(int *arr, int n, int num)
{
    int count = 0;
    sort(arr,arr+n);
    
    for(int i=0;i<n;i++)
    {
        int k=i+1;
        int j=n-1;
        int x=arr[i];
        while(k<j)
        {
        	if(x+arr[k]+arr[j] == num)
        	{

	        	int count1=1,count2=1,c3=0;
                if(arr[j] == arr[k])
                {
                    c3 = j-k+1; //number of elemts in b/w of those j and k
                	count += ((c3-1)*c3)/2; // koi bhi 2 pick out of c3 elements..nc2
                    k=j; //taaki while break hojaye and we can chck fr next i thus cant return here
                     // but pair sum me can return here only
                }
				else
                {
                    
                    while(arr[k] == arr[k+1]) // wrks fine iff k and j vali postns are no equla vrna count1 and count2 both will increase
                    {
                            k++;
                            count1++;
                    }

                    while(arr[j] == arr[j-1])
                    {
                        j--;
                        count2 ++;
                    }

                    count+=  count1 * count2;
                    k++;
                    j--;
                }
            }
                
            else if(x+arr[k]+arr[j] < num)
                k++;
            else
                j--;
        }
    }
    return count;
}

