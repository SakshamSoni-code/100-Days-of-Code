class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int ans=0;
        int n =pref.size();
        for(string s : words){
            bool b=true;
            string word = s;
            if(word.size() >=n){
                for(int i=0;i<n;i++){
                    if(word[i]!=pref[i]) b=false;
                }
                if(b) ans++;
            }
        }
        return ans;
    }
};