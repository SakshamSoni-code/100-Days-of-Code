/* 
Problem-> 976. Largest Perimeter Triangle
Platform-> Leetcode


approach: we will sort the vector and atke the largest side as one sde of the triangle 
and check if can form a triagle with the taken side and other two larger sides which are just smaller than the the taken side

ex-     3 1 2 6
      sort: 1 2 3 6.... here we cant make  a traingle with 6 as largest side and 2 and 3 as other sides then it is obvious that
      we cant't make traingle with any values less than 2 and 3 for 6(as sum will be much smaller now)
*/

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        // t.c-> O(nlogn)   s.c-> O(1)
        int ans=0;
        
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>1;i--)
        {
            if(nums[i]<nums[i-1]+nums[i-2]){
                ans=nums[i]+nums[i-1]+nums[i-2];
                break;
            }
        }
        
      return ans;  
        
    }
};