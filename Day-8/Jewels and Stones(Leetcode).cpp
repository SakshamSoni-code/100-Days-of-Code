// t.c-> O(J+S)  S>C-> O(J)

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st(jewels.begin(), jewels.end());
        int cnt=0;
        
        
        for(int i=0;i<stones.size();i++)
        {
            if(st.find(stones[i])!=st.end()){
                cnt++;
            }
        }
        return cnt;
        
        /*
        int num = 0;
    for (int i = 0; i < jewels.size(); i++){
        num += count(stones.begin(), stones.end(), jewels[i]);
    }
    return num;
        
        
        */
    }
};