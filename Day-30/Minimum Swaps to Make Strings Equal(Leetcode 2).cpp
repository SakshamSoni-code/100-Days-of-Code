class Solution {
public:
    int minimumSwap(string s1, string s2) {
        
        int count_x_y_pair=0 , count_y_x_pair=0, ans=0;
        
        for(int i=0;i<s1.size();i++)
        {
            
            if(s1[i]=='x' && s2[i]=='y'){
                count_x_y_pair++;
            }
            
            else if(s1[i]=='y' && s2[i]=='x'){
                count_y_x_pair++;
            }
        }
        
        if((count_x_y_pair % 2 !=0 && count_y_x_pair % 2 ==0) || (count_x_y_pair % 2 ==0 && count_y_x_pair % 2 !=0))
        {
            return -1;
        }
        
        ans = count_x_y_pair/2 + count_y_x_pair/2;
        
        if(count_y_x_pair % 2 !=0) ans+=2;
        
        return ans;
    }
};