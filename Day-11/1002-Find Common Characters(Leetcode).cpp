class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n=words.size();
        vector<vector<int>> v(n, vector<int> (26,0));
        vector<string> ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0; j<words[i].size();j++)
            {
                v[i][words[i][j]-'a']++;
            }
        }
        
        for(int i=0;i<26;i++)
        {
            int minc=INT_MAX;
            int j=0;
            for(;j<n;j++)
            {
                minc=min(minc , v[j][i]);
            }
            
            while(minc > 0){
                //string res = "";
                //res += (i + 'a');
                ans.push_back(string(1, (i+'a')));
                minc--;
            }
        }
        return ans;
    }
};