class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        
        /* t.c-> O(n)  s.c-> o(n)
        A basic intuition can be concluded from question is that, if a person is believing someone else than himself than that person is not qualified for being a judge or if a person is trusted by others and has everyone's favour i.e total of N-1 favours, than this person is truly the judge.
        Also if a certain x person is trusted by others from town, than this x person value should be increased and those who trusted that x person there values should be decreased.
At last traverse through every person of town and while traversing If a person is found with N-1 trusts than this person should be the judge and return the index of that person .
    
        
        */
        vector<int> trusted(n+1, 0);
        
        for(auto p : trust){
            trusted[p[0]]--;
            trusted[p[1]]++;
        }
        
        for(int i=1;i<=n;i++)
        {
            if(trusted[i]==n-1) return i;
        }
        return -1;
        
        
        
        
        /* t.c->o(n^2)  s.c-> o(n)
        map<int,int> mp;
        if(trust.size()==0){
            if(n==1) return 1;
            else return -1;
        }
        for(int i=0;i<trust.size();i++)
        {
            mp[trust[i][1]]++;
        }
        
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second == n-1){
                for(int i=0;i<trust.size();i++){
                    if(trust[i][0]==it->first)return -1;
                }
                return it->first;
            }
        }
        return -1;   */
    }
};