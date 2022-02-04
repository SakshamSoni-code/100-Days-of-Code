 vector<int> subarraySum(int arr[], int n, long long s)
    {
        int i=0,j=0;
        long long sum=arr[0];
        while(i<n){
            if(sum==s){
                return {i+1, j+1};
            }
            
            else if(sum < s){
                j++;
                sum+=arr[j];
            }
            else{
                sum-=arr[i];
                i++;
            }
        }
        return {-1};
        
        // Your code here
        /*map<int,int> mp;
        vector<int> ans;
        mp[0]=-1;
        long long prefix_sum=0;
        for(int i=0 ;i<n;i++)
        {
           prefix_sum+=arr[i];
           if(mp.find(prefix_sum-s)!=mp.end()){
               ans.push_back(mp[prefix_sum-s]+2);
               ans.push_back(i+1);
               break;
           }
           mp[prefix_sum]=i;

        }
        return ans;  */
    }
