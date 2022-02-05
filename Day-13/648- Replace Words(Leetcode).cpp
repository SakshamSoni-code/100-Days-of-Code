class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        
        
        
        // BRUTE FORCE
        map<string,int> mp;
        
        for(auto root : dictionary){
            mp[root]=0;
        }
        
        string ans="";
        string word;
        stringstream iss(sentence);
        vector<string> temp;
        while(iss >> word){
            bool b=false;
            string s="";
            for(int i=0;i<word.size();i++){
              s+=word[i];
              if(mp.find(s)!=mp.end()){
                  b=true;
                  temp.push_back(s);
                  break;
              }
            }
            if(b==false){
                temp.push_back(word);
             }
            
        }
        for(int i=0;i<temp.size();i++){
            ans+=temp[i];
            if(i!=temp.size()-1) ans+=" ";
        }
        return ans;
    }
};