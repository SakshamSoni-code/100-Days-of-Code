/*

t.c-> o(nlogn+mlogm) n=size of s, m=size of t
s.c-> O(n)


*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        else{
            map<char,int> mp;
            
            for(auto it: s){
                mp[it]++;
            }
            int count=mp.size();
            
            for(int i=0;i<t.length();i++){
                  if(mp.find(t[i])!=mp.end()){
                      mp[t[i]]--;
                      if(mp[t[i]]==0)count--;
                }
            }
            if(count==0) return true;
        }
        return false; 
        
        /*sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t; */
    }
};