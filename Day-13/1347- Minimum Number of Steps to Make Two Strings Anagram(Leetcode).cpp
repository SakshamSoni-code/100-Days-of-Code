class Solution {
public:
    int minSteps(string s, string t) {
        int sum=0;
        unordered_map<char,int> mp;
        for(auto it : s){
            mp[it]++;
        }
        
        for(auto it : t){
            mp[it]--;
        }
        
        for(auto m : mp){
            if(m.second < 0) sum+=m.second;
        }
        return abs(sum);
        
        
        /*unordered_map<char,int> mp;
        
        for(auto it : t){
            mp[it]++;
        }
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end()) cnt++;
            else{
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
            }
        }
        return cnt; */
    }
};