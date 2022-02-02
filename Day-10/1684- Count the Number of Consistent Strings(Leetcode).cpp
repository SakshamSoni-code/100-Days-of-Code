class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> mp;
        for(int i=0;i<allowed.size();i++)
        {
            mp[allowed[i]]++;
        }
        int cnt=0;
        for(int i=0;i<words.size();i++)
        {
            bool b=true;
            for(int j=0;j<words[i].size();j++)
            {
                if(mp.find(words[i][j])==mp.end()){
                    b=false;
                }
            }
            if(b==true){
                cnt++;
            }
        }
        return cnt;
    }
};