/*
-- For every particular day I am maintaining the min price on left side
-- I am calculation the profit I can have by selling the item at current price and buying at min price on left side
-- At the same time I am maintaing the max profit I can get in the whole process



*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // minPrice is the minimum price from day 0 to day i. And maxPro is the maximum profit   we can get from day 0 to day i.
        int minPrice=INT_MAX;
        int maxProfit=0;
        
        for(int i=0;i<prices.size();i++)
        {
            minPrice=min(minPrice,prices[i]);
            maxProfit=max(maxProfit, prices[i]-minPrice);
        }
        return maxProfit;
    
        
    }
};