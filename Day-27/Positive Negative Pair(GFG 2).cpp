class Solution{
  public:
    //Function to return list containing all the pairs having both
    //negative and positive values of a number in the array.
    vector <int> findPairs(int arr[], int n) 
    {
        // code here
        
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(mp.find(-1 * arr[i])!=mp.end()){
                if(arr[i] > 0){
                    ans.push_back(-1 * arr[i]);
                    ans.push_back(arr[i]);
                }
                else{
                    ans.push_back(arr[i]);
                    ans.push_back(-1 * arr[i]);
                }
            }
            mp[arr[i]]=1;
        }
        return ans;
    }
};