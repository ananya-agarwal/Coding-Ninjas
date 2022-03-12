#include <iostream>
#include <string>
using namespace std;

string getString(int d)
{
    if(d == 2)
    	return "abc";
    if(d == 3)
    	return "def";
    if(d == 4)
    	return "ghi";
    if(d == 5)
    	return "jkl";
    if(d == 6)
    	return "mno";
    if(d == 7)
    	return "pqrs";
    if(d == 8)
    	return "tuv";
    if(d == 9)
    	return "wxyz";
    else
        return " ";
}
void helper(int num, string output)
{
    if(num == 0)
    {
        cout<<output<<endl;
        return;
    }
    
    int num_last = num/10;
    int last = num%10;
    
	//helper(num_last,output); 
    string smallString = getString(last);
    int smallSize = smallString.size();
    for(int i =0;i<smallSize;i++)
    	helper(num_last, smallString[i] + output);
}

void printKeypad(int num)
{
    string output = "";
	helper(num, output);
}
