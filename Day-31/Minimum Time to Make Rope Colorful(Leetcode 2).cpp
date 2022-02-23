class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
        // Another Method 2
        int ans = 0, maxCost = 0, sumCost = 0, n = colors.size();
        for (int i = 0; i < n; i++) {
            if (i > 0 && colors[i] != colors[i - 1]) {
                ans += sumCost - maxCost;
                sumCost = maxCost = 0;
            }
            sumCost += neededTime[i];
            maxCost = max(maxCost, neededTime[i]);
        }
        ans += sumCost - maxCost;
        return ans;

        
        /* Another Method
        // Hold the character with the biggest cost in hand.
        int ans=0, maxCost=0;
        
        for(int i=0;i<colors.size();i++)
        {
            if(i > 0 && colors[i]!=colors[i-1]){
                maxCost=0;
            }
            ans+=min(maxCost , neededTime[i]);
            maxCost=max(maxCost , neededTime[i]);
        }
        return ans; */
        
        // t.c->o(n)  s.c->o(1)
        /* MY METHOD
        int ans=0;
        
        for(int i=1;i<colors.size();i++)
        {
            if(colors[i] == colors[i-1]){
                if(neededTime[i] < neededTime[i-1]){
                    ans+=neededTime[i];
                    swap(neededTime[i], neededTime[i-1]);
                }
                else{
                    ans+=neededTime[i-1];
                }
            }
        }
        return ans;   */ 
    }
};