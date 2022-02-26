class Solution {
public:
    static bool comp(string s1 , string s2){
        if(s1.size() != s2.size()){
            return s1.size() > s2.size();
        }
        else{
            return s1 < s2;
        }
    }
    string findLongestWord(string s, vector<string>& dictionary) {
        
        map<char, vector<int>> mp;
        int i=0;
        
        vector<string> temp;
        for(auto c : s){
            mp[c].push_back(i++);
        }
        
        for(int i=0;i<dictionary.size();i++)
        {
            string check=dictionary[i];
            int latest=-1;
            
            for(int j=0;j<check.size();j++)
            {
                auto it = upper_bound(mp[check[j]].begin() , mp[check[j]].end() , latest);
                if(it == mp[check[j]].end()){
                    break;
                }
                
                latest=*(it);
                if(j==check.size()-1)  temp.push_back(check);
            }
        }
        
        if(temp.size()==0) return "";
        sort(temp.begin() , temp.end(), comp);
        return temp[0];

    }
};