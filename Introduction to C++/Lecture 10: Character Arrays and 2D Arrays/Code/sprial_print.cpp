void spiralPrint( int **arr, int re, int ce) 
{
   int rs=0, cs=0;
    while(rs<re && cs<ce)
    {
        for(int i=cs; i<ce;++i)
        {
            cout<< arr[rs][i]<<" ";
        }
        rs++;
        
        for(int i=rs;i<re;++i)
        {
            cout<< arr[i][ce-1]<<" ";
        }
        ce--;
        if(rs<re)
        {
            for( int i=ce-1;i>=cs;--i)
            {
                cout<< arr[re-1][i]<<" ";
               
            }
           re--;
        }
          
        
        if(cs<ce)
        {
            for(int i=re-1;i>=rs;--i)
            {
                cout<< arr[i][cs]<<" ";
                
            }
              cs++;
        }
       
    }
}
