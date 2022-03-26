#include <stack>
int countBracketReversals(string input)
{
   
    if(input.size() % 2 != 0)
        return -1;
    stack <char> s;
    for(int i=0;input[i];i++)
    {
        // in next 4 lines, removing the balanced expression from the input string
        if(input[i] == '{')
            s.push('{');
        else if(input[i] == '}')
        {
            if(s.empty())
                s.push('}'); 
            
            else if(!s.empty())
            {
                if(s.top() == '{')
                    s.pop();
                else if(s.top() == '}')
                    s.push('}');
            }
        }
        
    }
    int count = 0;
    while(!s.empty())
    {
        char c1 = s.top();
        s.pop();
        char c2 = s.top();
        s.pop();

        if(c1 == c2)
            count++;
        else
            count += 2; 
    }
    return count;
}
