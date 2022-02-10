class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        
        
        set<int> s;
        for(auto c : sentence){
            s.insert(c);
        }
        return s.size()==26;
        
        
       /* unordered_map<char,int> mp;
        for(auto c : sentence){
            mp[c]++;
        }
        
        for(char c='a';c<='z';c++)
        {
            if(mp.find(c)==mp.end()){
                return false;
            }
        }
        return true; */
    }
};