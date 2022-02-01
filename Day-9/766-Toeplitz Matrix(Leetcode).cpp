class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        // dont't check for every diagonal
        //move in each row(toatal_row-1) till(total_col-1) and check every element in that row with its diagonal
        
        for(int i=0;i<matrix.size()-1;i++)
        {
            for(int j=0;j<matrix[i].size()-1;j++)
            {
                if(matrix[i][j] != matrix[i+1][j+1]) return false;
            }
        }
        return true;
        
        /*Brute Force
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                int i_=i,j_=j;
                while(i_<matrix.size() && j_<matrix[i].size()){
                    if( i_<matrix.size()-1 && j_<matrix[i].size()-1 && matrix[i_][j_] !=matrix[i_+1][j_+1]){
                        return false;
                    }
                    i_++;
                    j_++;
                    
                }
            }
        }
        return true; */
    }
};