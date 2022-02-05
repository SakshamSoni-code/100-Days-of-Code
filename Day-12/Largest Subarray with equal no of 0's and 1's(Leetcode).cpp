class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       // change every 0 with -1
        // then problem will chnage into find longest subarray with sum 0 (becuase in that subaay equal 1's and eual -1's make the sum as 0)
        
        /*for(int i=0;i<nums.size();i++){
            if(nums[i]==0) nums[i]=-1;
        }  */
        
        unordered_map<int,int> mp;
        int maxi=0, sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) nums[i]=-1;
            sum+=nums[i];
            if(sum==0){
                maxi=i+1;
            }
            else{
                if(mp.find(sum)!=mp.end()) maxi=max(maxi , i-mp[sum]);
                else mp[sum]=i;
            }
        }
        return maxi;
    
    }
};