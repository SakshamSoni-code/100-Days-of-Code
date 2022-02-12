class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        
        set<string> st;
        for(string &s : emails){
            string temp;
            
            for(char &c :s){
                if(c=='+' || c=='@') break;
                if(c=='.') continue;
                temp+=c;
            }
            
            temp+=s.substr(s.find('@'));
            st.insert(temp);
        }
        return st.size();
    }
};