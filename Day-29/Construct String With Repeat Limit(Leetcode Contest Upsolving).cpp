class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        int freq[26]={0};
        
        // freq map
        for(char c : s){
            freq[c-'a']++;
        }
        
        priority_queue<pair<int,int>> pq;
        
        
        // put the char and the count in pq
        
        for(int i=0;i<26;i++)
        {
            if(freq[i] > 0) pq.push({i, freq[i]});
        }
        
        string ans="";
        
        while(!pq.empty()){
            // get the largest guy with its freq
            // largest char
            int char1 = pq.top().first;
            // freq of largest char
            int freq1 = pq.top().second;
            
            // pop the largest, use it for as many times you want and after that place it back
            pq.pop();
            
            // LETS PLACE LARGEST GUY FIRST
            
            // I will add the largest guy to ans for RL times 
            // i will add it either I am adding it for the first time
            // or previous guy is not equal to largest
            
            if(ans.size()==0 || ans.back() != char(char1 + 'a')){
                // i will put largest element for limit times
                
                int times = min(freq1 , repeatLimit);
                for(int i=0; i<times ;i++)
                {
                    ans+=char(char1 + 'a');
                }
                
                // how many times you have put the largest , reduce that times from freq
                freq1-=times;
                // Are you still left?
                // Ans isyes, then you only is the largest , put it back in pq
                if(freq1){
                    pq.push({char1 , freq1});   // bc I have pop it full initially
                }
            }
            // handling of second largest
            else{
               // if there is no second largest
                if(pq.size()==0) break;
                    // get the second largest guy with its freq
                int char2 = pq.top().first;
                int freq2 = pq.top().second;
                pq.pop();  
                
                // add one occurence of second largest as we can't put first largest
                ans+=char(char2 + 'a');
                freq2--;
                
                // still left add it back
                if(freq2){
                    pq.push({char2 , freq2});
                }
                // we have pop out the first largest but we have not used it as we have not gone inside if...so add it back
                pq.push({char1 , freq1});
            }  
        }
        return ans;
    }
};