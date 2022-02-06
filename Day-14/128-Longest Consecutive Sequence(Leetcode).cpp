class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int num :  nums){
            st.insert(num);
        }
        int longestStreak=0;
        
        for(int num : nums){
            if(!st.count(num-1)){
                int currentNum=num;
                int currentStreak=1;
                
                while(st.count(currentNum+1)){
                    currentNum+=1;
                    currentStreak+=1;
                }
                longestStreak = max(longestStreak , currentStreak);
            }
        }
        return longestStreak;
    }
};