#include<iostream>
using namespace std;

int main()
{
    int n,count=1,num1;
    cin>>n;
    cin>>num1;
    bool ontrack=true;
    bool isDec=false;
    while(count<=n-1)
    {  
        count++;
        int num2;
        cin>>num2;
        if(num2<num1)
        {
            if(isDec){
                cout<<"false";
                ontrack=false;
                break;   
            }
        }
        else if(num2>num1)
        { 
          isDec=true;
             
        }
            else 
                if(num1==num2){
                cout<<"false";
                ontrack=false;
                break;
            }
          num1=num2;  
        } 
    if(ontrack)
    {
        cout<<"true";
    }

}
