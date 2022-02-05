class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int> mp;
        int cnt=1;
        for(auto it : order){
            mp[it]=cnt;
            cnt++;
        }
        
        for(string &word : words){
            for(char &c : word){
                c=mp[c];
            }
        }
        return is_sorted(words.begin() , words.end());
       
    }
};