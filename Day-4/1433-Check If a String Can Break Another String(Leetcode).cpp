class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        
        if( s1.length()!= s2.length()) return false;
        sort(s1.begin() ,s1.end());
        
        sort(s2.begin(), s2.end());
        bool b=false;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]>=s2[i]){
                b =true;
            }
            else{
                b=false;
                break;
            }
        }
        if(b==true) return true;
        else{
            for(int i=0;i<s2.length();i++){
                if(s2[i] < s1[i]){
                    return false;
                }
            }
           
        }
        return true;
        
    }
};