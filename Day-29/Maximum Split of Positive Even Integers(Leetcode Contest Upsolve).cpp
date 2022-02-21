class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;
        
        if(finalSum % 2 !=0){
            return {};
        }
        
        long long i=2;
        long long sum=0;
        
        while((sum+i) <= finalSum){
            
            ans.push_back(i);
            sum+=i;
            i+=2;
        }
        
        ans[ans.size()-1]+=finalSum-sum;
        return ans;
    }
};