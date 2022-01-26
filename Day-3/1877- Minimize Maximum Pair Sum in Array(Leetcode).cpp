/*
Approach:suppose if we are considering graetest element right now then which element from the given array can sum up to the greatest ele and can give the min sum for the greatest element?
then the answer will be the smallest element.
same for second largest element the pair can be form with second smallest element
Here you will think that why with second largest we are not forming pair with smallest bc smallest has already paired up with the largest elemnt and we must have all pairs as distinct elements

so sort the array and consider fisrt and last corresping elements

t.c-> O(nlogn)  s.c-> O(1)


*/


class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        if(nums.size()==2){
          return nums[0]+nums[1];
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int max_pair_sum=INT_MIN;
        for(int i=0;i<n/2;i++){
            max_pair_sum=max(max_pair_sum,nums[i]+nums[n-i-1]);
        }
        return max_pair_sum;
    }
};