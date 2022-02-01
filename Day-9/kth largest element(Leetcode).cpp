class Solution {
public:
     static  int lomutoPartition(vector<int> &nums,int l,int h){
         
         //The quick select  approach is the most efficient approach to solve the problem. The time complexity is O(N)  S.c-> O(1)
         // kth largest element is (n-k+1)th smallest
         // for kth smallest p==k-1
         // here p==(n-k+1)-1 ....> p==n-k
        int pivot=nums[h];
        int i=l-1;
        for(int j=l;j<=h-1;j++)
        {
            if(nums[j]<pivot)
            {
                i++;
                swap(nums[i],nums[j]);
            }
        }
        swap(nums[i+1],nums[h]);
        return i+1;
    }
    int findKthLargest(vector<int>& nums, int k) {
        int l=0,h=nums.size()-1;
        while(l<=h)
        {
            int p=lomutoPartition(nums,l,h);
            
            if(p==nums.size()-k) return nums[p];
            
            else if(p<nums.size()-k) l=p+1;
            else h=p-1;
        }
        return -1;
        
        /* t.c-> o(n)  s.c->O(n)
        map<int,int> mp;
        
        for(auto it : nums){
            mp[it]++;
        }
        
        int freq=0;
        for(auto i=mp.rbegin();i!=mp.rend();i++)
        {
            freq+=i->second;
            if(freq>=k) return i->first;
        }
       return -1;   */
    }
};