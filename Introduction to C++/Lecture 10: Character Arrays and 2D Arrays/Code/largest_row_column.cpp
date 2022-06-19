#include<bits/stdc++.h>

void findLargest(int **a, int m, int n)
{
    int sum_row,sum_col,max_col,max_row,temp_row=0,temp_col=0;
   
    max_col = INT_MIN;
    for(int j=0;j<n;j++)
    {
        sum_col=0;
        for(int i=0;i<m;i++)
        {
            sum_col+=a[i][j];
            if(sum_col > max_col)
            {
                
                max_col = sum_col;
                temp_col = j;
            }
        }
    }
    
    
    max_row = INT_MIN;
    for(int i=0;i<m;i++)
    {
        sum_row=0;
        for(int j=0;j<n;j++)
        {
            sum_row+=a[i][j];
            if(sum_row > max_row)
            {
                 max_row = sum_row;
                 temp_row = i;
            }
               
        }
    }
    
    if(max_col > max_row)
        cout<<"column "<<temp_col<<" "<<max_col;
    else
        cout<<"row "<<temp_row<<" "<<max_row;   
}
