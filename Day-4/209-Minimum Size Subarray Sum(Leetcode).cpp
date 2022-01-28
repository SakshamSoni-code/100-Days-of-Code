/* Approach
t.c-> o(n)  s.c->  o(1)
NOTE: TRY TO DO WITH BINARY SEARCH

*/


class Solution {
public:
    bool ansPossible(int len, vector<int>& prefixSum, int target){
        if(len==0)return false;
        if(prefixSum[len-1]>=target){
            return true;
        }
        
        for(int i= len; i<prefixSum.size();i++)
        {
            if(prefixSum[i]-prefixSum[i-len] >= target) return true;
        }
        return false;
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        
        // Binary search  t.c->O(nlogn)
        
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
        }
        int ans=INT_MAX;
        int low = 0, high= nums.size();
        
        
        
        while(low<=high){
            int mid= low+(high-low)/2;
            
            if(ansPossible(mid,nums,target)){ // check can we have subaarray of size mid w                                                  whose sum >=target
                ans=min(ans,mid);
                high=mid-1;     // if yes then lets reduce high as we have to find min                                         length(bc all subarrays whith len greater than mid will                                     definitely have sum >=target)
            }
            else{
                low=mid+1;    // if at mid we do not find any SA then lets try to increase                                     the len of SA
            }
        }

         return (ans != INT_MAX) ? ans : 0;
        
        // Two pointer or sliding window  t.c-> o(n)   s.c-> O(1)
         /* int res=INT_MAX;
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
        return (res != INT_MAX) ? res : 0;  */
    }
};