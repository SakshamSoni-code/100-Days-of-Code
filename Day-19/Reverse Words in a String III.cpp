class Solution {
public:
    string reverseWords(string s) {
        
        string word;
        string ans="";
        stringstream iss(s);
        
        while( iss >> word){
            reverse(word.begin() , word.end());
            ans+=word+" ";
        }
        ans.pop_back();
        return ans;
    }
};