class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        
        
        // Brute Force O(n^2)
        bool f=true;
        string ans="";
        for(int i=0;i<strs[0].size();i++)
        {
            for(int j=1;j<strs.size();j++)
            {
                if(i>strs[j].size()){
                    f=false;
                    break;
                }
                if(strs[0][i] != strs[j][i]) f=false;
            }
            if(f){
                ans+=strs[0][i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};