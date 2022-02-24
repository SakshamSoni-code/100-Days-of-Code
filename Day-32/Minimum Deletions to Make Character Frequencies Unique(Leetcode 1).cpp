class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26);
        
        for(char c : s){
            v[c-'a']++;
        }
        
        sort(v.begin() , v.end(), greater<int>());
        
        int f=v[0];
        int ans=0;
        
        for(int num : v){
            if(num > f){
                if(f > 0) ans+=(num-f);
                else ans+=num;
            }
            
            f=min(f-1 , num-1);
        }
        return ans;
        
        
    }
};