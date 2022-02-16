class Solution {
public:
    
   
    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        
        while(i<j)
        {
            if(s[i]!=s[j]){
                int i1=i,j1=j-1;
                int i2=i+1,j2=j;
                
                while(i1<j1 && s[i1]==s[j1]){
                    i1++;
                    j1--;
                }
                
                if(i1 >=j1) return true;
                
                while(i2<j2 && s[i2]==s[j2]){
                    i2++;
                    j2--;
                }
                return i2>=j2;
            }
            i++;
            j--;
        }
        return true;
      
    
    
    
    /* brute force->TLE
    static bool ispal(string check){
        
        int i=0,j=check.size()-1;
        
        while(i<j){
            if(check[i]!=check[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        
        int i=0,j=s.size()-1;
        bool ans=false;
        bool checks =false;
        while(i<j){
            
            if(s[i]!=s[j]){
                checks=true;
                string temp1 = s.substr(0,i) + s.substr(i+1 , s.size()-1-i);
                string temp2 = s.substr(0,j) + s.substr(j+1 , s.size()-1-j);
                if(ispal(temp1) || ispal(temp2)){
                    ans=true;
                    break;
                }
            }
            i++;
            j--;
        }
        if(checks==false) return true;
        return ans;   */
    }
};