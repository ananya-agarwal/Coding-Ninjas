//if 2 helper stacks were available phle orgnl stack se one by one h1 me daaldo elements and then h1 se all in h2 
//and then basck from h2 to original stack

void reverseStack(stack<int> &s1, stack<int> &s2)
{
    int x;
    while(!s1.empty())
    {
        x = s1.top();
        s2.push(x);
        s1.pop();
    }
    s1 = s2;
}
