class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // 1st step : Transpose the matrix
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++) swap(matrix[i][j] , matrix[j][i]);
        }
        
        for(int i=0;i<n;i++)
        {
            reverse(matrix[i].begin() , matrix[i].end());
        }
        
        
        
        
        // 2md step: Reverse every row
        
        
        
        
        
        
        /*t.c-> O(2(n^2))  s.c-> o(1)
         int n=matrix.size();

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++) swap(matrix[i][j] , matrix[j][i]);
        }
        
        int i=0, j=n-1,row=0;
        
        while(i<j){
            row=0;
            while(row<n)
            {
               swap(matrix[row][i],matrix[row][j]);
                row++;
            }
            i++;
            j--;
        }     */
        
        
        
        /* Brute Force  t.c-> o(n^2)  s.c-> o(n^2)
        int n=matrix.size() , col=n-1;
        
        vector<vector<int>> v(n , vector<int>(n,0));
        
        for(int i=0;i<n;i++)
        {
            int row=0;
            for(int j=0;j<n;j++)
            {
                v[row][col] =matrix[i][j];
                row++;
            }
            col--;
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[i][j]=v[i][j];
            }
        }    */
    }
};