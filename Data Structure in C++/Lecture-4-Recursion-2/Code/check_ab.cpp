bool checkAB(char t[])
{
    if(t[0] == '\0')
        return true;
    if(t[0] == 'a')
    {
    if(t[1] == 'a')
        return checkAB(t+1);
        
    else if(t[1] == 'b' && t[2] == 'b') 
        return checkAB(t+3);
        
    else if(t[1] == '\0')
        return true;
    }
    return false;
}

// agar 0th pe a ha toh, uske aage a/null/ bb check hoga
//agar aa jaisa ha toh, second a se check krna shuru kardenge vapas for the upper 3 condtions
//agar null hai toh seedha true
//agar abb ha toh, 4th element i.e. index 3 se again start to check for a and the 3 condtions

//bb(null) is chekced kyuki abb ke baad se jab check hoga toh 4th elemnt
//i.e. iss recursion ka 0th index vala null sabse upper check hojayega
//bba is chekced kyuki abb ke baad se jab check hoga toh 4th elemnt
//i.e. iss recursion ka 0th index vala a 5th line 
