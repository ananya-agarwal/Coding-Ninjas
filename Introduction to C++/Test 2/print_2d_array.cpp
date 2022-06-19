#include <iostream>
using namespace std;

void print2DArray(int **input, int n, int m) 
{
	int j,k=0,i=0;
    while(i<n)
    {
          k=i;
          while(k<n)
          {
              for(j=0;j<m;j++)
              {
                cout<<input[i][j]<<" ";
              }
             cout<<endl;
             k++;
         }
         i++;  
    }

}


//i se row no
//k se no of times voh row print hogi
