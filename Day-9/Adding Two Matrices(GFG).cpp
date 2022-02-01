class Solution
{   
    public:
    //Function to add two matrices.
    vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
       vector<vector<int>> ans;

        if(A.size()!=B.size() || A[0].size()!=B[0].size()){
            return ans;
        }
        
        
        for(int i=0;i<A.size();i++)
        {
            vector<int> v;
            for(int j=0;j<A[i].size();j++){
                v.push_back(A[i][j] + B[i][j]);
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};