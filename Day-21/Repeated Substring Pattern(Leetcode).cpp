class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //short cut
        
        return (s+s).substr(1,2*s.size()-2).find(s)!=-1;
        
        
        
        
        /* t.c->o(n *n)  s.c->o(1)
        string temp="";
        for(int i=0;i<s.size()-1;i++)
        {
            temp+=s[i];
            if((s.size() % temp.size())==0){
                string ans="";
                int n=s.size()/temp.size();
                
                for(int i=0;i<n;i++)
                {
                    ans+=temp;
                }
                
                if(ans==s)return true;
            }
        }
        return false;   */
    }
};