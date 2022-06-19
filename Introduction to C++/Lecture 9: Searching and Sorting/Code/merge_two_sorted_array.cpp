void merge(int *a, int n1, int *b, int n2, int *c)
{
   int i=0,j=0,k=0;
   while(i<n1 && j<n2)
   {
      if(a[i] < b[j])
      	  c[k++] = a[i++];
      else
          c[k++] = b[j++];     
   }
    
    while(i < n1)
        c[k++] = a[i++];
    while(j < n2)
        c[k++] = b[j++];
 
}
