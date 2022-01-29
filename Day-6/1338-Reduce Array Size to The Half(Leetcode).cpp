class Solution {
public:
    static bool comp(pair<int,int>p1 , pair<int,int> p2){
        return p1.second > p2.second;
    }
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        
        for(int i=0 ;i< arr.size();i++)
        {
            mp[arr[i]]++;
        }
        vector<pair<int,int>> v;
        for(auto it: mp)
        {
            v.push_back(it);
        }

        
        sort(v.begin(), v.end(), comp);
        
        int n= arr.size();
        int ans=0;
        int add=0;
        for(int i=0;i<v.size();i++)
        {
            add+=v[i].second;
            ans++;
            if(n-add <= n/2)break;
            
            
        }
        return ans;
        
        
        
    }
};