class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int primary=0, secondary=0;
        //  o(n)
        // square matix so rows==colms thats why mat.size else have to write no of cols
        for(int i=0;i<mat[0].size();i++){
            primary+=mat[i][i];
        }
        
        int k=mat[0].size()-1;
        for(int i=0;i<mat.size();i++)
        {
            if(i!=k){
                secondary+=mat[i][k];
            }
            k--;
        }
        return primary + secondary;
        
        /*  o(n^2)
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                if(i==j){
                    primary+=mat[i][j];
                }
                
                if((i+j)==mat.size()-1 && i!=j){
                    secondary+=mat[i][j];
                }
            }
        }
        return primary + secondary; */
    }
};