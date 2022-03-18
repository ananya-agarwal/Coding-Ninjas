#include <iostream>
#include <string>
using namespace std;
void helper(string input, string output)
{
    if(input.length() == 0)
        cout<<output<<endl;
    
    for(int i =0;i<input.length();i++)
    {
        char ch = input[i];
        string left = input.substr(0,i);
        string right = input.substr(i+1);
        string total = left + right;
        helper(total, output + ch);
    }    
}

void printPermutations(string input)
{

    /* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	 */
    string output = "";
	helper(input, output);
}
