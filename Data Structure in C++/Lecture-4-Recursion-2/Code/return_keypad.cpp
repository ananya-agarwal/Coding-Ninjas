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

int keypad(int num, string output[])
{
    if(num == 0 || num == 1)
    {
        output[0] = "";
        return 1;
    }
    int next_num = num / 10;
    int last = num % 10;
    int smallOutputSize = keypad(next_num, output);
    string optionsForLastDigit = getString(last);
    int size_last = optionsForLastDigit.size();
    int size = smallOutputSize * size_last;
    
    int k = 0;
	string final_string [size];
    for(int j=0;j<size_last;j++)
    {
          for(int i=0;i<smallOutputSize;i++)
          {
                final_string[k++] = output[i] + optionsForLastDigit[j];
          }
    }
    for(int u=0;u<size;u++)
    	output[u] = final_string[u];
    return size;
}
