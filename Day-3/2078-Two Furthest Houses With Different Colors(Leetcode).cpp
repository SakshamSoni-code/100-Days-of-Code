/*
For first house from left side: We will find first house from right side which has different colour than the house under consideration
For first house from right side: We will find out fisrt house from left side which has different color than the house under consideration
Finally we check the max distance among the two got above distances!
t.c-> O(n)  s.c->o(1)
*/


class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int n=colors.size();
        int i=0,j=n-1;
        
        while(colors[0]==colors[j]){
            j--;
        }
        while(colors[i]==colors[n-1]){
            i++;
        }
        return max(n-i-1,j);
        
    }
};