void intersection(int *input1, int *input2, int size1, int size2)
{
    int i,j,k=0;
    int *a = new int[size1];
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
            if(input1[i] == input2[j])
            {
                a[k] = input1[i];  
                k++;
                input2[j] = -1;
                break;
            }
        }
    }
    int y;
    for(y=0;y<k;y++)
    {
        cout<<a[y]<<" ";
    }
}
