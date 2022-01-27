// TRY USING BUCKET SORT FOR O(n) COMPLEXITY
class Solution {
public:
     t.c-> O(nlogn  s.c-> o(n))
    static bool comp(pair<int,int> p1 , pair<int,int> p2){
        return p1.second > p2.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        vector<pair<int,int>> v;
        
        for(auto it : mp){
           v.push_back({it.first, it.second});
        }
        
        sort(v.begin(),v.end(),comp);
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans; 
        
    }
};