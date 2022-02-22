    int longestCommonSum(bool arr1[], bool arr2[], int n) {
            // code here 
            
            int temp[n];
            for(int i=0;i<n;i++) temp[i]=arr1[i] - arr2[i];
            
            int ans=0;
            unordered_map<int,int> mp;
            int prefixSum=0;
            
            for(int i=0;i<n;i++){
                prefixSum+=temp[i];
                
                if(prefixSum == 0){
                    ans=i+1;
                }
                
                else{
                    if(mp.find(prefixSum)!=mp.end()){
                    ans = max(ans , i- mp[prefixSum]);
                    }
                    
                    if(mp.find(prefixSum)== mp.end()){
                        mp[prefixSum]=i;
                    }
                }
            }
            return ans;
    }