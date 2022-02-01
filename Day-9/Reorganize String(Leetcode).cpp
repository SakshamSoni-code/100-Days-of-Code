class Solution {
public:
    
    string reorganizeString(string s) {
        
        map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        
        set<pair<int,char>> st;
        
        for(auto it : mp){
            st.insert(make_pair(it.second ,it.first));
        }
        auto i=st.end();
        i--;
        if(i->first > (s.size()+1)/2)return "";
        string ans ="";
        char last='A';
        
        
        while(!st.empty()){
            auto it=st.end();
            it--;
            if(it->second==last)it--;
            
                ans+=it->second;
                int freq=it->first;
                char c=it->second;
                st.erase(it);
                freq--;
                
                if(freq!=0) st.insert(make_pair(freq,c));

                last=c;
            
        }

        return ans;
       
    }
};