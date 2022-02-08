class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        map<char, vector<int>> mp;
        int i=0;
        for(auto c : s){
            mp[c].push_back(i++);
        }
        
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            string check=words[i];
            int latest=-1;
            
            for(int j=0;j<check.size();j++)
            {
                auto it = upper_bound(mp[check[j]].begin() , mp[check[j]].end() , latest);
                if(it == mp[check[j]].end()){
                    break;
                }
                
                latest=*(it);
                if(j==check.size()-1) count++;
            }
        }
        
        
        return count;

      
    } 
};