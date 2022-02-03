class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        set<int> s;
        // set.insert returns a pair: (first) pointer to the inserted element, and (second) a boolean - false if an element was already in the set, and true otherwise. So, as we inserting occurances, we return false if we find a duplicate.
        for(auto it :mp){
            if(s.insert(it.second).second ==false)return false;
        }
        return true;

        
        
        
        
        
        
        /*
        
        for(auto it:mp){
            s.insert(it.second);
        }
        
        if(s.size()!=mp.size())return false;
        
        return true;*/
    }
};