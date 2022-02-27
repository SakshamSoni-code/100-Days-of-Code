class Solution {
public:
    int minSteps(string s, string t) {
        
        // upsolving
        int ans=0;
        vector<int> freqs(26,0);
        vector<int> freqt(26,0);
        
        for(char c : s) freqs[c-'a']++;
        for(char c : t) freqt[c-'a']++;
        
        for(int i=0;i<26;i++)
        {
            ans+=abs(freqs[i]-freqt[i]);
        }
        return ans;
        
        /* During Contest
        int ans=0;
        unordered_map<char,int> mps;
        for(char c : s){
            mps[c]++;
        }
        
        unordered_map<char,int> mpt;
        for(char c : t){
            mpt[c]++;
        }
        
        for(auto it : mps){
            if(mpt.find(it.first)==mpt.end()){
                ans+=it.second;
            }
            else{
                if(mpt[it.first] < it.second){
                    ans+=it.second - mpt[it.first];
                }
            }
        }
           for(auto it : mpt){
            if(mps.find(it.first)==mps.end()){
                ans+=it.second;
            }
            else{
                if(mps[it.first] < it.second){
                    ans+=it.second - mps[it.first];
                }
            }
        }
        return ans;  */
    }
};