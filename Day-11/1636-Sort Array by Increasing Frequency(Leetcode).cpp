class Solution {
public:
    // SHORT VERSION
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        
        
        for(auto n : nums){
            mp[n]++;
        }
        
        sort(nums.begin(),nums.end(),[&](int a ,int b){
            return mp[a] == mp[b] ? a > b : mp[a] < mp[b];
        });
     return nums;
    /* static bool comp(pair<int,int> p1 , pair<int,int> p2){
        if(p1.second!=p2.second){
            return p1.second<p2.second;
        }
        else return p1.first > p2.first;
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        vector<pair<int,int>> v;
        for(auto it : mp){
            v.push_back({it.first,it.second});
        }
        
        sort(v.begin(),v.end(),comp);
        
        
        for(int i=0;i<v.size();i++)
        {
            while(v[i].second > 0){
                ans.push_back(v[i].first);
                v[i].second--;
            }
        }
        
        return ans;  */
    }
};