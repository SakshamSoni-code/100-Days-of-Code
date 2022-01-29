   void findsubsetSums(int ind, int sum, vector<int> &arr, int N, vector<int> & ans){
       if(ind==N){
           ans.push_back(sum);
           return;
       }
       
       //pick the element
       findsubsetSums(ind+1, sum+arr[ind], arr, N, ans);
       
       // not pick
       findsubsetSums(ind+1, sum, arr, N, ans);
   }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        findsubsetSums(0,0,arr,N,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }