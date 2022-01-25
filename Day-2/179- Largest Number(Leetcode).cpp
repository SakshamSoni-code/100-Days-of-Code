/* t.c-> O(nlogn+n) s.c-> o(1) */

class Solution {
public:
    static bool comp(int a, int b){
        string s1=to_string(a);
        string s2=to_string(b);
        return s1+s2>s2+s1;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), comp);
        
        if(nums[0]==0){
            return "0"; // because if we have ip as [0,0] then max number is 0 not 00 
        }
        string ans="";
        
        for(auto num: nums){
            ans+=to_string(num);
        }
        return ans;
    }
};