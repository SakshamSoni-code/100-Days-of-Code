class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        
        priority_queue<pair<int,int>> pq;
        
        if(a!=0)pq.push({a,0});
        if(b!=0)pq.push({b,1});
        if(c!=0)pq.push({c,2});
        
        string ans="";
        
        while(!pq.empty()){
            
            int char1 = pq.top().second;
            int freq1 = pq.top().first;
            
            cout<<char(char1 + 'a')<<" "<<freq1;
            
            pq.pop();
            
            if(ans.size()==0 || ans.back() != char(char1 + 'a')){
                int times = min(freq1 , 2);
                for(int i=0;i<times;i++){
                    ans+=char(char1 + 'a');
                }
                
                freq1-=times;
                if(freq1){
                    pq.push({freq1 , char1});
                }
            }
            else{
                if(pq.size()==0) break;
                int char2 = pq.top().second;
                int freq2 = pq.top().first;
                pq.pop();  
                
                if(freq1 >= freq2){
                    ans+=char(char2 + 'a');
                    freq2--;
                }
                else{
                    
                    int times2 = min(freq2 , 2);
                    for(int i=0;i<times2;i++){
                      ans+=char(char2 + 'a');
                   }
                  freq2-=times2;
                }
                if(freq2){
                    pq.push({freq2 , char2});
                }
                pq.push({freq1 , char1});
            }              
        }
        return ans;
    
    }
};