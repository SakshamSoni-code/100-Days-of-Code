class Solution {
public:
    int longestStrChain(vector<string>& words) {
     if(words.size()==0) return 0;
        int res=0;
        
        sort(words.begin(),words.end(), [&](string a ,string b){
            return a.size() < b.size();
        });
        unordered_map<string,int> mp;
        
        for(string &word : words){
            mp[word]=1;
            
            for(int i=0;i<word.size();i++)
            {
                string temp =word;
                string previous = temp.erase(i,1);
                
                if(mp.find(previous)!=mp.end()  && mp[previous] + 1 > mp[word]){
                    mp[word]=mp[previous] +1;
                }
            }
            res=max(res,mp[word]);
        }
        
       return res;    
    }
};