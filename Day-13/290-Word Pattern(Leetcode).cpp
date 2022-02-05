class Solution {
public:
    bool wordPattern(string pattern, string s) {
       
        
        
        / BRUTE FORCE TC-> o(N+M)    SC->(2N+M)
        unordered_map<char,int> pat;
        for(auto p : pattern){
            pat[p]++;
        }
        
        unordered_map<string,int> st;
        int cnt=0;
        vector<string> v;
        string word;
        stringstream iss(s);
    
        while(iss >> word){
            st[word]++;
            v.push_back(word);
            cnt++;
        }
        if(pattern.size()!=cnt) return false;
        
        if(pat.size()!=st.size()) return false;
        
        for(int i=0;i<pattern.size()-1;i++)
        {
            if(pattern[i]==pattern[i+1]){
                if(i<v.size()-1 && v[i]!=v[i+1]) return false;
            }
            else if(pattern[i]!=pattern[i+1]){
                if(i<v.size()-1 && v[i]==v[i+1]) return false;
            }
        }
        return true;  
        
        
    }
};