int remAnagram(string str1, string str2)
{
// Your code goes here
   unordered_map<char,int> mp;
    int cnt=0;
    for(char c :str1){
        mp[c]++;
    }
    for(char c : str2){
        mp[c]--;
    }
    
    for(auto it : mp)
    {
        if(it.second !=0){
            cnt+=abs(it.second);
        }
    }
   return cnt;
}