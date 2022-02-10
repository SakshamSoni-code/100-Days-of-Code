class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> transform= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s;
        for(auto code : words){
            string t;
            for(auto c : code){
                t+=transform[c-'a'];
            }
            s.insert(t);
        }
        return s.size();
    }
};