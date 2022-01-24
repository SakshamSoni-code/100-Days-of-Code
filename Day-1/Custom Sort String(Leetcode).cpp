/*
Approach: we will give rank to evry char in order string and using that rank we will comapre evry two char in string s using our own comp fun
  t.c-> o(s.len log s.len)   s.c-> o(26+t.len)

Problem: 791. Custom Sort String
Platform: Leetcode
*/


class Solution {
public:
    static bool comp(pair<int,int>p1, pair<int,int>p2){
        return p1.second<p2.second;
    }
    string customSortString(string order, string s) {
        vector<int>  rank(26);
        // initialise everything as infinity
        
        for(int i=0;i<26;i++) rank[i]=INT_MAX;
        
        for(int i=0;i<order.length();i++) rank[order[i]-'a']=i;
        
        vector<pair<char,int>> v;
        
        for(int i=0;i<s.length();i++)
        {
            v.push_back({s[i], rank[s[i]-'a']});
        }
        
        sort(v.begin(),v.end(),comp);
        
        string ans;
        
        for(int i=0;i<v.size();i++)
        {
            ans+=v[i].first;
        }
        return ans;
    }
};