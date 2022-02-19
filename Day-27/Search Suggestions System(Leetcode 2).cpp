class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        
        // BINARY SEARCH  t.c->O(nlogn + mlogn)   s.c->O(n)
        sort(products.begin() , products.end());
        
        vector<vector<string>> ans;
        string prefix="";
        for(char c : searchWord){
            prefix+=c;
            
            vector<string> each_row;
            
            auto it = lower_bound(products.begin(), products.end(), prefix);
            
            for(int i=0;i<3 && it+i!=products.end();i++)
            {
                string s= *(it+i);
                if(s.find(prefix)!=0) break;
                
                each_row.push_back(s);
            }
            ans.push_back(each_row);
        }
        return ans;
        
        
        /* Brute force t.c0>o(mn + m^2logm)
        vector<vector<string>> ans(searchWord.size());
        for(int i=0;i<searchWord.size();i++)
        {
            for(int j=0;j<products.size();j++)
            {
                if(i>=products[j].size()) continue;
                
                if(searchWord[i] == products[j][i]){
                    ans[i].push_back(products[j]);
                }
                else{
                    products[j]="ZZZZ";
                } 
                
            }
        }
        
        for(int i=0;i<ans.size();i++)
        {
            sort(ans[i].begin(), ans[i].end());
            while(ans[i].size() > 3){
                ans[i].pop_back();
            } 
        }
        return ans; */
    }
};