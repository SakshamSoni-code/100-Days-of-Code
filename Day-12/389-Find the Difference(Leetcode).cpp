class Solution {
public:
    char findTheDifference(string s, string t) {
      
        int a=0;
        int b=0;
        
        
        for(char c:s){
            a+=c;
        }
        
        for(char c:t){
            b+=c;
        }
        return b-a;
        /*sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<t.length();i++)
        {
            if(t[i]!=s[i]   || i==t.length()-1){
                return t[i];
            }
        }
        return 'a';  */
    }
};