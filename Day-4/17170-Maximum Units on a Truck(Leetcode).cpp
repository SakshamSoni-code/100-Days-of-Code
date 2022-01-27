class Solution {
public:
   // t.c-> O(nlogn)  s.c-> O(1)
    //custom sort (in decreasing order of numberOfUnitsPerBox as we have to return  maximum total number of units )

    static bool comp(vector<int> &v1, vector<int> &v2){
        return v1[1] > v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(), boxTypes.end(), comp);
        int maxUnits=0;
        
        for(auto box : boxTypes){
            //choose minimum out of current no of boxes and capacity left
            int x= min(box[0], truckSize); 
            maxUnits+=(x*box[1]); // adding units in ans
            truckSize-=x; // reduce the capacity
            
            if(truckSize==0) break; // capacity full!
        }
        return maxUnits;
        
        /*sort(boxTypes.begin(), boxTypes.end(), comp);
        int cnt=0;
        int maxUnits=0;
       
            
            for(int i=0 ;i<boxTypes.size();i++)
            {
                int localCnt=1;
                while(cnt<truckSize && localCnt<=boxTypes[i][0] ){
                    maxUnits+=1*boxTypes[i][1];
                    cnt++;
                    localCnt++;
                }
                if(cnt==truckSize)break;
            }
        
        return maxUnits ;  */
        
    }
};