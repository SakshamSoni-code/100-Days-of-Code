class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=0;
        vector<int> row(n);// to max value in each row
        vector<int> col(n); // to store max value in each col
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                row[i]=max(row[i] , grid[i][j]);
                col[j]=max(col[j] , grid[i][j]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans+=min(row[i] , col[j])- grid[i][j];
            }
        }
        return ans;
    }
};