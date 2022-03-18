#include <string.h>
using namespace std;

void helper(string input, string output)
{
    if(input.length() == 0)
        cout<<output<<endl;
    if(input.length() >0)
    {
        char ch = input[0];
        int c = ch - '0';
        char ch1 = 'a' + c -1;
 
        helper(input.substr(1), output + ch1);

        char ch2 = input[0];
        char ch3 = input[1];
        int c1 = (ch2 - '0')*10 + (ch3-'0'); //11 = 10+1
     
        char ch5;
        if(c1 >= 10 && c1 <= 26)
        {            
            ch5 = 'a' + c1 -1;
        if(input.length() > 1) //agar string length <1 hui toh hum null access krne ki try krnge..run time error
      	  helper(input.substr(2), output + ch5); 
        }
    }
}

void printAllPossibleCodes(string input) 
{
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
  string output="";
  helper(input,output);    
}

