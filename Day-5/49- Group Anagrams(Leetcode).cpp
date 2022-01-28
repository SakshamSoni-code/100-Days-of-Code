class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;
        
        for( auto s : strs){
            string t=s;
            sort(t.begin(), t.end());
            mp[t].push_back(s);
        }
        vector<vector<string>> anagrams;
        for(auto it : mp){
            anagrams.push_back(it.second);
        }
        return anagrams;
        
        
        
        
        /* t.c->o(n(nlogn)) n- size of strs, m-size of each string in strs
        s.c-> o(n)
        vector<string> copyStrs = strs;
        for(int i=0;i<copyStrs.size();i++)
        {
            sort(copyStrs[i].begin(), copyStrs[i].end());
        }
        sort(copyStrs.begin(), copyStrs.end());
        unordered_map<string , pair<int,int>> mp;
        int cnt=0;
        int val=1;
        for(int i=0;i<copyStrs.size();i++)
        {
            if(i>0 && copyStrs[i]!=copyStrs[i-1]){
                cnt++;
                val=1;
            }
            mp[copyStrs[i]]={val++, cnt};
            
        }
        vector<vector<string>> ans(mp.size());
        for(int i=0;i<strs.size();i++)
        {
            string s= strs[i];
            sort(s.begin(),s.end());
            if(mp.find(s)!=mp.end()){
                ans[mp[s].second].push_back(strs[i]);
                mp[s].first--;
                
            }
        }
        return ans; */
    }
};