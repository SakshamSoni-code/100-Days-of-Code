class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        
        if(nums.size()==2 || nums.size()==1) return nums;
        vector<int> odd;
        vector<int> even;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        
        sort(even.begin() , even.end());
        sort(odd.begin() , odd.end(), greater<int>());
        int ind=0;
        for(int i=0;i<nums.size();i+=2){
            nums[i]=even[ind];
            ind++;
        }
        ind=0;
        for(int i=1;i<nums.size();i+=2){
            nums[i]=odd[ind];
            ind++;
        }
        return nums;
    }
};