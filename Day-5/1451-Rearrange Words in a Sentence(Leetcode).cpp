class Solution {
public:
    
    // t/c-> O(nlogn)  s.c->O(n)
    static bool comp(pair<string,pair<int,int>> p1 , pair<string,pair<int,int>> p2){
        if(p1.second.second!=p2.second.second){
            return p1.second.second< p2.second.second;
        }
        else{
            return p1.second.first < p2.second.first;
        }
    }
    string arrangeWords(string text) {
        vector<pair<string,pair<int,int>>> p;
        //int cnt=0;
        int ind=0;
        string word;
        stringstream iss(text);

        while( iss >> word){
            p.push_back({word,{ind,word.size()}});
            ind++;
        }
        sort(p.begin(),p.end(),comp);
         string ans="";
        
        for(int i=0;i<p.size();i++)
        {
            ans+=p[i].first;
            if(i!=p.size()-1) ans+=' ';
        }
        if(ans[0]>=97 && ans[0]<=122){
            ans[0]-=32;
        }
        
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i] >=65 && ans[i]<=90){
                ans[i]=ans[i]+32;
            }
        }
        return ans;
       /* vector<pair<string,pair<int,int>>> p;
        int cnt=0;
        int ind=0;
        string s="";
        for(int i=0;i<text.length();i++)
        {
            if(text[i]!=' '){
                cnt++;
                s+=text[i];
            }
            else{
               p.push_back({s,{ind,cnt}});
               s="";
               cnt=0;
               ind++;
            }
        }
        p.push_back({s,{ind+1,cnt}});
        sort(p.begin(),p.end(),comp);
        
        string ans="";
        
        for(int i=0;i<p.size();i++)
        {
            ans+=p[i].first;
            if(i!=p.size()-1) ans+=' ';
        }
        if(ans[0]>=97 && ans[0]<=122){
            ans[0]-=32;
        }
        
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i] >=65 && ans[i]<=90){
                ans[i]=ans[i]+32;
            }
        }
        return ans;  */
    }
};