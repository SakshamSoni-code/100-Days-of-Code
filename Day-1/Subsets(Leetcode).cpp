/*
Approach: Using recursion we will consider for every element wheter we want to take it in current subset or we do not want to take it

t.c-> O(2^n)  s.c-> (1)

NOTE- TRY TO SOLVE USING BITMASK

Problem: Subsets
Platform: Leetcode
*/


class Solution {
public:
    vector<vector<int>> allSubsets;
    void generate(vector<int> &subset,int ind, vector<int> &nums){
        if(ind==nums.size())
        {
            allSubsets.push_back(subset);
            return;
        }
        
        // take ith element in subset
        
        subset.push_back(nums[ind]);
        generate(subset,ind+1,nums);
        
        // do not take ith element
        
        subset.pop_back();
        generate(subset,ind+1,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>  empty;
        generate(empty,0,nums);
        return allSubsets;
    }
};