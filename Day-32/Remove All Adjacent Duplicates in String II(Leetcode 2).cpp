class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        vector<pair<char,int>> v;
        v.push_back({'#', 0});
        
        for(char c : s){
            if(c != v.back().first){
                v.push_back({c,1});
            }
            else if(++v.back().second == k){
                v.pop_back();
            }
        }
        string ans="";
        
        for(auto &i : v){
            ans.append(i.second , i.first);
        }
        return ans;
    }
};