#include <queue>

void findMedian(int *arr, int n)
{
    priority_queue<int> max;
    priority_queue<int, vector<int>, greater<int>> min;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            max.push(arr[i]); //any 1 heap me daaldo 
        
        else
        {
            if (max.top() < arr[i])
                min.push(arr[i]);
            else
                max.push(arr[i]);
        }

        int diff1 = max.size() - min.size();
        int diff2 = min.size() - max.size(); 
        //diff of the 2 can be negative as well but .size func is expected to return only 
        //postive numbers thus it is set to be unsigned inbt by default but the diff can come out 
        //to be negative as well..i.e. it can go out of range of unsigned int.. thus if we will typecast it maybe writing (int)(max.size() - min.size())
        //or storing it in a variable before, will solve the problem
        
        if (diff1 > 1)
        {
            int x = max.top();
            max.pop();
            min.push(x);
        }
        
        else if (diff2 > 1)
        {
            int x = min.top();
            min.pop();
            max.push(x);
        }

        if (max.size() == min.size())
            cout << (min.top() + max.top()) / 2 << " ";

        else if (max.size() > min.size())
            cout << max.top() << " ";
        
        else
            cout << min.top() << " ";
    }
}
