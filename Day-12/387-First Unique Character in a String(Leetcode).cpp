class Solution {
public:
    int firstUniqChar(string s) {
        map<char,pair<int,int>> mp;
        int ind=INT_MAX;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]].first++;
            mp[s[i]].second=i;
        }
    
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second.first==1){
                ind=min(ind,it->second.second);
            }
        }
        return ind ==INT_MAX ? -1 : ind;
    }
};