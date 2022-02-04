class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        unordered_map<int,int> mp;
        int sum=0;
        int maxi=0;
        for(int i=0;i<N;i++)
        {
            sum+=A[i];
            if(sum==K){
                maxi=i+1;
            }
            
            if(mp.find(sum)==mp.end()){
                    mp[sum]=i;
                }
            if(mp.find(sum-K)!=mp.end()){
                    maxi=max(maxi , i-mp[sum-K]);
                }
        }
        return maxi;
    } 

};