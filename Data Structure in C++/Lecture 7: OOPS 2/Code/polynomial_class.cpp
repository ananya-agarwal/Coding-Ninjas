class Polynomial 
{
     public:
    int *degCoeff;
    int capacity;
    
    public:
    Polynomial()
    {
        degCoeff=new int[5];
        capacity=5;
        for(int i=0;i<capacity;i++)
           degCoeff[i]=0;                    // /initialise array with null values
    }
    
//copy constructor
    Polynomial(Polynomial const & p1)
    {
        this->degCoeff= new int[p1.capacity];
        for( int i=0;i<p1.capacity;i++)
        {
            this->degCoeff[i]=p1.degCoeff[i];       //     copying elements
        }

        capacity=p1.capacity;            //updating capacity also
    }
    
//set coefficient
    void  setCoefficient(int degree,int coff)
    {
        while(degree>=capacity)
        {
            int *newarray=new int[2*capacity];        // making a new arry and copying the elemments
            for(int i=0;i<capacity;i++)
            {
                newarray[i]=degCoeff[i];
            }
                                                    //initilizing rest of elements to zero
            for(int j=capacity;j<2*capacity;j++)
            {
                newarray[j]=0;
            }

            delete [] degCoeff;
            degCoeff=newarray;
            capacity*=2;
        }
        degCoeff[degree]=coff;
    }
    
//print class
    void print() const
    {
        for(int i=0 ;i<capacity;i++)
        {
            if(this->degCoeff[i]==0)
                continue;
            else
            {
                cout<<degCoeff[i]<<"x"<<i<<" ";
            }
        }
        cout<<endl;
    }
    
//copy assigment constructor
    void operator=(Polynomial const & p1)
    {
          this->degCoeff= new int[p1.capacity];        //similar as copy constructor
        for( int i=0;i<p1.capacity;i++)
        {
            this->degCoeff[i]=p1.degCoeff[i];
        }

        capacity=p1.capacity;
    }
    
//add
  Polynomial operator+( Polynomial & p2)            
    {
       int Max=max(capacity,p2.capacity);

       //setting value 0 at remaining index of smaller array
       if(Max==capacity)
       {
           for(int i=p2.capacity;i<capacity;i++)
           {
               p2.setCoefficient(i,0);                            //  updating garbage values to null
           }                                               //so that I am not adding any no to a garbage value
       }
       if(Max==p2.capacity)
       {
        for(int i=capacity;i<p2.capacity;i++)
           {
               setCoefficient(i,0);
           }
       }
       Polynomial p3;
        for(int i=0;i<Max;i++)
        {
            p3.setCoefficient(i,degCoeff[i] + p2.degCoeff[i]);  
        }
        return p3;
    }
    
//subtract
    Polynomial operator-( Polynomial  & p2)                //its working
    {
        int Max=max(capacity,p2.capacity);

       //setting value 0 at remaining index of smaller array
       if(Max==capacity)
       {
           for(int i=p2.capacity;i<capacity;i++)
           {
               p2.setCoefficient(i,0);                                
           }
       }
       if(Max==p2.capacity)
       {
        for(int i=capacity;i<p2.capacity;i++)
           {
               setCoefficient(i,0);
           }
       }
       Polynomial p3;
        for(int i=0;i<Max;i++)
        {
            p3.setCoefficient(i,degCoeff[i] - p2.degCoeff[i]);
        }
        return p3;
    }

 Polynomial operator*( Polynomial  & p2)
{
     Polynomial p3;
     for(int i=0;i<capacity;i++)    //loop for *this
     {
         Polynomial p;
         for(int j=0;j<p2.capacity;j++)   ///loop for p2.degcoeff elemnts
         {
              p.setCoefficient(i+j,degCoeff[i]*p2.degCoeff[j]);     //   setting coeff at write place in arr
                                        //copying sideways to an alternate object  which I will return
             //ex: 2x^4 * 3x^2 = (2*3)x^(4+2)..x^6 ha toh 6 index pr jaake in dono ka multplctn daalna ha
         }
         p3=p3+p; //p3 ke ek index pe, uss same ke index ke p vale saare aakr add hogaye
     }
    return p3; 
 }
};
