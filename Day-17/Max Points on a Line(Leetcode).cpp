class Solution {
public:
    void standardise(int &num , int &den){
        if(num==0) den=1;
        else if(den==0) num=1;
        
        else if((num<0 && den<0) || den<0){
            num*=-1;
            den*=-1;
        }
    }
    int maxPoints(vector<vector<int>>& points) {
        
        if(points.size()==0) return 0;
        
        int ans=1;
        map<pair<int,int>,int> mp;
        
        for(int i=0;i<points.size();i++)
        {
            int olp=0, maxm=0;
            for(int j=i+1;j<points.size();j++){
            if((points[i][0]==points[j][0]) && points[i][1]==points[j][1]){
                olp++;
            } 
            else{
            
            int delx=points[j][0]-points[i][0];
            int dely=points[j][1]-points[i][1];
            int g=__gcd(abs(delx),abs(dely));
                
            int f=delx/g , s=dely/g;
            standardise(f,s);
            
            if(mp.find({f,s})!=mp.end()){
                mp[{f,s}]++;
            }
            else mp[{f,s}]=1;
            
             maxm=max(maxm , mp[{f,s}]);
            }
          }
            ans=max(ans,maxm+olp+1);
            mp.clear();
        }
        return ans;
        
    }
};