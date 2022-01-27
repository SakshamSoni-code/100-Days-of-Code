/* Approach
t.c-> o(n)  s.c->  o(1)
NOTE: TRY TO DO WITH BINARY SEARCH

*/


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int res=INT_MAX;
        int left=0, val_sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            val_sum+=nums[i];
            
            while(val_sum>=target){
                res=min(res, i+1-left);
                val_sum-=nums[left];
                left++;
            }
        }
        return (res != INT_MAX) ? res : 0;
    }
};