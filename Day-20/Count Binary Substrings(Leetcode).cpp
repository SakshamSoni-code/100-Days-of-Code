class Solution {
public:
    int countBinarySubstrings(string s) {
        int currGroup=1, preGroup=0, ans=0;
        
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1]) currGroup++;
            else{
                ans+=min(currGroup , preGroup);
                preGroup = currGroup;
                currGroup=1;
            }
        }
        ans += min(currGroup , preGroup);
        return ans;
    }
};