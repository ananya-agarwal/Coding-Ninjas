void arrange(int *a, int n)
{
     if(n % 2 != 0)
  {
     int i,val1=1,val2=n-1,j,k,u;
          u=(n-1)/2;
          for(j=0;j<=u;j++)
          {
              a[j] = val1;
              val1 += 2;
          }

          for(k=u+1;k<n;k++)
          {
              a[k] = val2;
              val2 -= 2;
          }
  }  
  else
  {
     int i,val1=1,val2=n,j,k,u;
          u=(n-1)/2;
          for(j=0;j<=u;j++)
          {
              a[j] = val1;
              val1 += 2;
          }

          for(k=u+1;k<n;k++)
          {
              a[k] = val2;
              val2 -= 2;
          }        
   }
}
