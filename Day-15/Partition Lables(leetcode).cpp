class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        // t.c-> o(n)  s.c-> O(1)
        vector<int> storeLastOccurence(26,0);
        vector<int> ans;
        for(int i=0;i<s.size();i++)
        {
            storeLastOccurence[s[i] - 'a']=i;
        }
        
        int maxIdx=-1, startIdx=0;
        for(int i=0;i<s.size();i++)
        {
            maxIdx=max(maxIdx , storeLastOccurence[s[i]-'a']);
            if(i==maxIdx){
                ans.push_back(maxIdx-startIdx+1);
                startIdx=i+1;
            }
        }
        return ans;
        
        /* t.c-> o(n)  s.c->o(n)
        unordered_map<char,int> mp;
        vector<int> ans;
        int curr_partition=0;
        int ind=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end()) {
                mp[s[i]]=1;
                int h=s.size()-1;
                while(h>=i){
                 if(s[h]==s[i]){
                    break;
                 }
                 h--;
                }
              curr_partition=max(curr_partition,h);

             if(i==curr_partition){
                 ans.push_back(1);
                 ind=i+1;
                 mp.clear();
                 continue;
             }
             if(curr_partition==s.size()-1){
                ans.push_back(curr_partition-ind+1);
                break;
             }
             
            }
           else{
                if(i==curr_partition){
                ans.push_back(curr_partition-ind+1);
                ind=i+1;
                mp.clear();
                }
           }
        }
        return ans;  */
    }
};