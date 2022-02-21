class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        
        long long ans= 1e18;
        sort(beans.begin() , beans.end());
        
        long long sum=0;
        for(auto it : beans){
            sum+=it;
        }
        long long n = beans.size();

        for(long long i=0;i<n;i++)
        {
            ans=min(ans , sum - (n-i)*beans[i]);
        }
        return ans;
    }
};