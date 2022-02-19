class Solution {
public:
    int numSplits(string s) {
        unordered_map<char,int> left;
        unordered_map<char,int> right;
        
        int ans=0;
        for(char c : s){
            right[c]++;
        }
        
        for(int j=0;j<s.size();j++)
        {
            if(left.size()==right.size()){
               ans++;
            }
            
            right[s[j]]--;
            if(right[s[j]]==0) right.erase(s[j]);
            
            left[s[j]]++;
        }
        return ans;
    }
};