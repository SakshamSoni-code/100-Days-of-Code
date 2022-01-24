/*
Question: K Closest Points to Origin
Platform: Leetcode
Approach: Sort the given array on the basis of squared distance(to be on safer side rather than taking double) from the origin
*/
// NOTE-- TRY OUT WITH OTHER APPROACHES
class Solution {
public:
    // t.c-> O(nlogn)   
    
    static int dist(vector<int> &v){
        return v[0]*v[0] + v[1]*v[1];
    }
    
    static bool myComparator(vector<int> &v1, vector<int> &v2){
        int d1=dist(v1);
        int d2=dist(v2);
        
        if(d1<d2) return true;
        else return false;
    }
    

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(),points.end(),myComparator);
        
        vector<vector<int>> ans(k);
        
        for(int i=0;i<k;i++)
        {
            for(int j=0;j<points[i].size();j++)
            {
                ans[i].push_back(points[i][j]);
            }
        }
        return ans;
    }
};