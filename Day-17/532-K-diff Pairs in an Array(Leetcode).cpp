class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        
        int cnt=0;
        for(int &num : nums){
            mp[num]++;
        }
        
        for(auto it : mp){
            if((k>0 && mp.find(it.first+k)!=mp.end()) || (k==0 && it.second>1)) cnt++;
        }
        return cnt;
    }
};