class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // MOST OPTIMISED t.c->o(2*(n*m))  s.c-> o(1)
        
        bool col0=false;
        int rows=matrix.size(), cols=matrix[0].size();
        
        for(int i=0;i<rows;i++)
        {
            if(matrix[i][0]==0) col0=true;
            for(int j=1;j<cols;j++)
            {
                if(matrix[i][j]==0) matrix[i][0] = matrix[0][j] = 0;
            }
        }
        
        for(int i=rows-1;i>=0;i--)
        {
            for(int j=cols-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
            }
            if(col0==true) matrix[i][0]=0;
        }
        
        
        
        /* brute force o((n*m)*(n+m))    s.c->o(n*m)
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> temp(n, vector<int> (m,-2));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0){
                    for(int k=0;k<n;k++){
                        temp[k][j]=0;
                    }
                    for(int k=0;k<m;k++){
                        temp[i][k]=0;
                    }
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(temp[i][j]==0){
                    matrix[i][j]=0;
                }
            }
        }    */
    }
};