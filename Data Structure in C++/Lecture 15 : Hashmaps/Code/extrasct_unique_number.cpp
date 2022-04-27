#include<unordered_map>

string uniqueChar(string str)
{
    string ans;
    unordered_map<char, int> ump;
    for (int i = 0; i < str.size(); i++)
    {
        ump[str[i]]++;
        if (ump[str[i]] == 1)
            ans += str[i];
    }
    return ans;
}
