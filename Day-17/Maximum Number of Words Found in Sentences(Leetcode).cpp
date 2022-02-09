class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        // simply you can count spaces
        int ans=0;
        for(auto s : sentences){
            ans=max(ans,(int)count(s.begin() , s.end() , ' ')+1);
        }
        return ans;
        
        /*int ans= INT_MIN;
        for(int i=0;i<sentences.size();i++)
        {
            int cnt=0;
            string s=sentences[i];
            string word;
            stringstream iss(s);
            
            while(iss >> word){
                cnt++;
            }
            ans=max(ans,cnt);
        }
        return ans;  */
    }
};