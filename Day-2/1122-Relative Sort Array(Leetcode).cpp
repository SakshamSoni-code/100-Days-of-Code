class Solution {
public:
    /*
    approach 2: using map
       t.c->O(n+m)**doubt    s.c--> o(n)
    */
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        
        for(auto i: arr1) mp[i]++;
        
        int pos=0;
        
        for(auto it : arr2){
            while(mp[it]-- > 0){
                arr1[pos++]=it;
            }
        }
        
        for(auto it : mp){
            while(it.second-- > 0){
                arr1[pos++]=it.first;
            }
        }
        return arr1;
    
    /* approach1: using custom sort
      ---same as   https://leetcode.com/problems/custom-sort-string/
      t.c-> O(n+m+mlogm)  s.c->o(m+n)
    
    static bool comp(pair<int,int>p1 , pair<int,int>p2){
        return p1.second<p2.second;
    }
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
      vector<int> rank(1001);
        for(int i=0;i<1001;i++) rank[i]=2000;
        
        for(int i=0;i<arr2.size();i++)
        {
            rank[arr2[i]]=i;
        }
        
        vector<pair<int,int>> v;
       // cout<<v.size()<<endl;
        
        for(int i=0;i<arr1.size();i++){
            v.push_back({arr1[i],rank[arr1[i]]});
        }
        
        sort(v.begin(),v.end(),comp);
        vector<int> ans;
        

        for(int i=0;i<v.size();i++)
        {
            ans.push_back(v[i].first);
        }
        
        set<int> s;
        for(int i=0;i<arr2.size();i++) s.insert(arr2[i]);
        int cnt=0;
        for(int i=0;i<arr1.size();i++)
        {
            if(s.find(arr1[i])==s.end())cnt++;
        }
        
        auto i= ans.begin()+(ans.size()-cnt);
        
        sort(i,ans.end());
        return ans;  */
    }
};