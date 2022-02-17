class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int id=1;
        unordered_map<char,int> mp1;
        
        for(int i=0;i<pattern.size();i++)
        {
            if(mp1.find(pattern[i])==mp1.end())
            {
                mp1[pattern[i]]=id;
                id++;
            }
        }
        
        vector<int> main2(pattern.size());
        
        for(int i=0;i<pattern.size();i++)
        {
            main2[i]=mp1[pattern[i]];
        }
        
        vector<string> ans;
        unordered_map<char,int> mp2;

        int id2=1;
        for(int i=0;i<words.size();i++)
        {
            string word=words[i];
            vector<int> comp(word.size());
            
            for(int j=0;j<word.size();j++)
            {
                if(mp2.find(word[j])==mp2.end()){
                    mp2[word[j]]=id2;
                    id2++;
                }
            }
            
            for(int j=0;j<word.size();j++)
            {
                comp[j]=mp2[word[j]];
            }
            
            
            if(main2==comp){
                ans.push_back(word);
            }
            
            mp2.clear();
            id2=1;
        } 
        return ans;

    }
};