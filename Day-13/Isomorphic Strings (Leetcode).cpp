class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        
        unordered_map<char,int> mp;
        set<int> st;
        for(int i=0;i<s.size();i++)
        {
            
            // suppose we have mapped p->q 
            // now we got to map p->r in this case we can return false as we can't map p with 
            // both q and r
            if(mp.find(s[i])!=mp.end()){   // if p key is already there
                if(mp[s[i]]!=t[i])return false;  // if value associated with p (which is q)  do not map with current value which is r then return false
            }
            
            // if we have map a->b
            // and we got to map q-> b
            // then we make some sort pf check that b as value is already marked before
            // if yes return false
            else if(st.find(t[i])==st.end()){
                mp[s[i]]=t[i];
                st.insert(t[i]);

            }
            else return false;
        }
        return true;   
        
    }
};