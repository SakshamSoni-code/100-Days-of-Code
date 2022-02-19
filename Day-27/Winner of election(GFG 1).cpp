  vector<string> winner(string arr[],int n){
       unordered_map<string,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        int maxVotes=0;
        string winner;
        
        for(auto &it : mp){
            string candidate=it.first;
            int votes=it.second;
            
            if(votes > maxVotes){
                maxVotes=votes;
                winner=candidate;
            }
            else if(votes==maxVotes && winner > candidate){
                winner=candidate;
            }
        }
        
        vector<string> ans;
        ans.push_back(winner);
        ans.push_back(to_string(maxVotes));
        
        
        return ans;
  }
  
    //Function to return the name of candidate that received maximum votes.
    // t.c->o(n) s.c0>o9n
    
    /* t.c->O(nlogn)  s.c->O(n)
    static bool comp(pair<string,int> p1 , pair<string,int> p2){
        if(p1.second !=p2.second){
            return p1.second > p2.second;
        }
        return p1.first < p2.first;
    }
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        unordered_map<string,int> mp;
        
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        
        vector<pair<string,int>> v;
        for(auto it : mp){
            v.push_back(make_pair(it.first , it.second));
        }
        sort(v.begin() , v.end(), comp);
        
        vector<string> ans;
        ans.push_back(v[0].first);
        ans.push_back(to_string(v[0].second));
        
        return ans;
    } */