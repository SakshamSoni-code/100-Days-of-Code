class Solution {
public:
    int balancedStringSplit(string s) {
        int b=0;
        int ans=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='L') b++;
            if(s[i]=='R') b--;
            
            if(b==0) ans++;
        }
        return ans;
    }
};