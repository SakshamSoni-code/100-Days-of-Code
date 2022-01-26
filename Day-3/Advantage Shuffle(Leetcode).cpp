/* Approach: For each nums2[i], we select the smallest number in nums1[i] that is greater than nums2[i](OR we can say that we will find the nest greater element in nums1 for a ele in nums2). If there are no such number, we select the smalest number in nums1[i].

*/


class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        
        // short form
        multiset<int> ms(begin(nums1), end(nums1));
        
        for(int i=0;i<nums2.size();i++)
        {
            // if largest element in nums1 is greater than current element of nums2 then try to find upper bound of current ele of nums2, else pick the smallest ele of nums1
            auto it = *ms.rbegin() > nums2[i] ? ms.upper_bound(nums2[i]): ms.begin();
            nums1[i]=*(it);
            ms.erase(it);
        }
        return nums1;
        
        /* long form 
         t.c-> o(nlogn)  
        
        multiset<int> ms;
        vector<int> ans;
        
        for(int i=0;i<nums1.size();i++) ms.insert(nums1[i]);
        
        for(int i=0;i<nums2.size();i++){
            auto it = ms.upper_bound(nums2[i]);
            if(it!=ms.end()){
                ans.push_back(*(it));
                ms.erase(it);
            }
            else{
                ans.push_back(*(ms.begin()));
                ms.erase(ms.begin());
            }
        }
        return ans;  */
      
    }
};