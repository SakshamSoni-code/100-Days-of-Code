/* approach: 
--if you consider every land as an insland then its perimeter will be 4*1=4
but for every land if we consider its neighbour then the perimeter will dec as 1 side which is common will reduce the permeter
--And for that common line we have consider it two times while considering the perimeter of two neighbours land individually
--if we observe carefully then we can notice that for evry land , only its right and bottom neighbour lands will matter

t.c-> o(n*m)
*/


class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int islands=0;
        int neighbour=0;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1){
                    islands++;
                    if(j< grid[i].size()-1 && grid[i][j+1]==1) neighbour++;
                    if(i<grid.size()-1 && grid[i+1][j]==1) neighbour++;
                        
                }
            }
        }
        return 4* islands - 2* neighbour;
        
    }
};