class Solution {
public:
    int numberOfSubstrings(string s) {
        
        
        
         // METHOD 1  t.c-> o(2n) s.c->o(n)
        int n = s.size() , ans=0;
        int i=0 , j=0;
        
        unordered_map<char,int> mp;
        while(j < n){
            
            mp[s[j]]++;
            while(mp.size() >= 3 ){
                mp[s[i]]--;
                
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
            }
            ans+=i;  // i will tell no of substring ending at index j who fulfills the cond
            j++;  
       }
        return ans;   
        
        
        /* BRUTE FORCE tle
        int n = s.size() , ans=0;
        
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                mp[s[j]]++;
                if(mp.size() == 3){
                    ans+=n-j;
                    break;
                }
            }
            
            mp.clear();
        }
        return ans;  */
        
    }
};