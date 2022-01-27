/*
Approach: sort both the given arrays
check if smallest greed can be satisfied with the smallest size cokie, if yes move forward for the greed of the next child and also move towards next cookie

if current greed is not satisfied by the current cokie then move forward for the next cokie to satisfy the greed (here should not move forward for next greed)






*/


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // t.c-> o(nlogn +mlogm)
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        
        int i=0,j=0;
        
        while(i<g.size() && j<s.size()){
            if(s[j]>=g[i]) i++;
            
            j++;
        }
        return i;
        
        
        // g.size()-n s.size()-m
        //t.c-. o(m + n(logm+logm)) -- nlogm
        //s.c-> o(m)
        /*multiset<int> ms(begin(s), end(s));
        int cnt=0;
        for(int i=0;i<g.size();i++)
        {
            if(ms.find(g[i])!=ms.end()){
                cnt+=1;
                ms.erase(ms.find(g[i]));
            }
            else{
              auto it = ms.upper_bound(g[i]);
              if(it!=ms.end()){
                  cnt+=1;
                  ms.erase(it);
              }
            }
        }
        return cnt; */
    }
};