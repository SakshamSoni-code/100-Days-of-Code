class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        
        // Two pointer
        // t.c-.o(m+n)  s.c->o(1)
        int m=s.size();
        int n =t.size();
        
        int i=0, j=0;
        
        while(i<m && j<n){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==m ? true : false;
        
        /*  hashing
         s.size ---> m
         t.size ---> n
         t.c->O(mlogn)   s.c->O(n)
        if(s=="")return true;
        unordered_map<char , vector<int>> mp;
        int i=0;
        for(auto c : t){
            mp[c].push_back(i);
            i++;
        }
        
        int latest=-1;
        
        for(int i=0;i<s.size();i++)
        {
            auto it =upper_bound(mp[s[i]].begin() , mp[s[i]].end() ,latest);
            if(it == mp[s[i]].end()){
                return false;
            }
            latest = *(it);
            if(i==s.size()-1) return true;
        }
        return true;;  */
    }
};