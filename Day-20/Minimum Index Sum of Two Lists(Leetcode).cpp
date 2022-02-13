class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
         
        
        
        // t.c->o(n+m)
         unordered_map<string,int> mp1;
         map<int, vector<string>> mp2;
         for(int i=0;i<list1.size();i++){
            mp1[list1[i]]=i;
        }
        
        for(int i=0;i<list2.size();i++){
            if(mp1.find(list2[i])!=mp1.end()){
                mp2[i+ mp1[list2[i]]].push_back(list2[i]);
            }
        }    
        
        auto it = mp2.begin();
        return it->second;

    
    
    
    
    
    
    
    
    /* FOOLISH WAY !!! t.c-> o(n+mlogm+)
    static bool comp(pair<string,int> p1 , pair<string,int> p2){
        return p1.second < p2.second;
    }
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int> mp;
        vector<pair<string,int>> v;
        
        for(int i=0;i<list1.size();i++)
        {
            mp[list1[i]]=i;
        }
        
        for(int i=0;i<list2.size();i++)
        {
            if(mp.find(list2[i])!=mp.end()){
                v.push_back({list2[i],mp[list2[i]] + i});
            }
        } 
         
        vector<string> ans;
        sort(v.begin() ,v.end() ,comp);
        
        if(v.size() > 1){
            if(v[0].second < v[1].second){
                ans.push_back(v[0].first);
            }
            else{
                int x=v[0].second;
                ans.push_back(v[0].first);
                ans.push_back(v[1].first);
                for(int i=2;i<v.size();i++)
                {
                    if(v[i].second==x){
                        ans.push_back(v[i].first);
                    }
                }
            }
        }
        else{
            ans.push_back(v[0].first);
        }
        return ans; */
    }
};