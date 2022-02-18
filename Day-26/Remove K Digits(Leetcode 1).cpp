class Solution {
public:
    string removeKdigits(string num, int k) {
        
        string ans="";
        
        for(int i=0;i<num.size();i++)
        {
            while(ans.size() > 0 && ans.back() >num[i] && k>0)
            {
                ans.pop_back();
                k--;
            }
            ans.push_back(num[i]);
        }
      
        
        
            for(int i=ans.size()-1;i>=0;i--)
            {
                if(k>0){
                    ans.erase(i,1);
                    k--;
                }
                else{
                    break;
                }
            }
        
        
        int len=0;
        while(ans[len]=='0'){
            len++;
        }
        ans.erase(0,len);
        
        if(ans=="") return "0";
        return ans;
        
        /* 1st method:
        
        while(k>0)
        {
            int i=0;
            while(i+1<num.size() && num[i]<=num[i+1]){
                i++;
            }
            num.erase(i,1);
            k--;
        }
        
        
        // lets remove trailing 0's
        int i=0;
        while(num[i]=='0'){
            i++;
        }
        num.erase(0,i);
        
        if(num=="") return "0"; // beause suppose num-"10" k=1    , we will get "" as final num but we have to return "0";
        return num;    */
    }
};