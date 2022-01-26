/* Approach : wrtten in notes
t.c-> O(n)  s.c->o(1)   */

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int x=nums.size()-1;
        bool b=false;
        while(x>0 && nums[x]<=nums[x-1]){
            x--;
        }
        if(x-1>=0){
            b=true;
            for(int y=nums.size()-1;y>=x;y--){
                if(nums[y]>nums[x-1]){
                    swap(nums[y],nums[x-1]);
                    break;
                }
            }
            int i=x,j=nums.size()-1;
            while(i<j){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
        }
        if(b==false){
            sort(nums.begin(),nums.end());
        }
    }
};