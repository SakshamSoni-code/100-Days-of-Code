/* 
Find the min ele of all the rows and push in the set
FInd max ele of each col and if this max is already present in set then this is our ans


*/


class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        unordered_set<int> st;
        vector<int> ans;
        for(int i=0;i<matrix.size();i++)
        {
            int mini=INT_MAX;
            for(int j=0;j<matrix[i].size();j++)
            {
                mini=min(mini, matrix[i][j]);
            }
            st.insert(mini);
        }
        
        for(int j=0 ;j<matrix[0].size();j++)
        {
            int maxi=INT_MIN;
            for(int i=0;i<matrix.size();i++)
            {
                maxi=max(maxi,matrix[i][j]);
            }
            
            if(st.find(maxi)!=st.end()){
                ans.push_back(maxi);
            }
        }
        return ans;
    }
};