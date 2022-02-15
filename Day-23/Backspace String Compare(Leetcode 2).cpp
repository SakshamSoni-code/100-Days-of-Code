class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        //t.c-> O(n+m) s.c-> o(1)
        //DRAWBACK : MODIFIES THE INPT STRING
        
        
        int k=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#'){
                k--;
                k=max(0,k);
            }
            else{
                s[k]=s[i];
                k++;
            }
        }
        
        int p=0;
        for(int j=0;j<t.size();j++)
        {
            if(t[j]=='#'){
                p--;
                p=max(0,p);
            }
            else{
                t[p]=t[j];
                p++;
            }
        }
        
        if(k!=p) return false;
        
        for(int i=0;i<k;i++)
        {
            if(s[i]!=t[i]) return false;
        }
        return true;
        
        /* t.c-> O(max(n,m))  s.c-> O(n+m)
        string temp1="";
        string temp2="";
        
        int i=0,j=0;
        while(i<s.size() || j<t.size()){
            if(i<s.size()){
                if(s[i]!='#') temp1.push_back(s[i]);
                else if(temp1.size() > 0) temp1.pop_back();
                i++;
            }
            
            if(j<t.size())
            {
                if(t[j]!='#') temp2.push_back(t[j]);
                else if(temp2.size() > 0) temp2.pop_back();
                j++;
            }
        }
        return temp1 == temp2; */
    }
};