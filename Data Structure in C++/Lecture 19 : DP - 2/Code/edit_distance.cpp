int editDistance(string s1, string s2) 
{
    if(s1.size() == 0 || s2.size() == 0)
        return max(s1.size(), s2.size());
    //either add khali vali me or remove bhare vale se
        
    int final;
	if(s1[0] == s2[0])
        return editDistance(s1.substr(1), s2.substr(1));
    
    else
    {
        //insert
        int y = editDistance(s1.substr(1), s2) + 1;
        
        //delete
        int z = editDistance(s1, s2.substr(1))+1;

        //replace/update
        int q = editDistance(s1.substr(1), s2.substr(1))+1;
        
        return min(y, min(z, q));
    }
}
