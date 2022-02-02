/*

mat[i][j] on the same diagonal have same value of i - j
For each diagonal,
put its elements together, sort, and set them back.

*/


class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        //t.c-> o(n*mlogd) where d is length of diagonal which can be min(n,m)   s.c-> o(m*n)
        int n=mat.size(), m=mat[0].size();
        
        unordered_map<int , priority_queue<int ,vector<int>, greater<int>>> mp; // min heap
        // to store elements in increasing order!!
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[i-j].push(mat[i][j]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mat[i][j]=mp[i-j].top();
                mp[i-j].pop();
            }
        }
        return mat;
    }
};