#include<stack>
stack<char> s;

bool checkRedundantBrackets(string input)
{ 
   for(int i=0;input[i];i++)
   {
       char ch = input[i];
       
       if(ch == ')')
       {
            int count = 0;
            while (s.top() != '(')
            {
                s.pop();
                count++;
            }
            if (count <= 1)
                return true;
           
            s.pop();
       }

       else
           s.push(ch);
   }
 
    return false;
}
