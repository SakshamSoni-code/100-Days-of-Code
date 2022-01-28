/* approach : for trips[i]

at fromi location curr will be increased by numPassengersi
at toi location curr will be decreased by numPassengersi
at any point of time , if curr>capacity , just return false 
t.c-> O(nlogn)     sc-> o(n)
*/

class Solution { 
public:
    
    bool carPooling(vector<vector<int>>& trips, int capacity) {
       vector<pair<int,int>> v;
        
        for(int i=0;i<trips.size();i++)
        {
            v.push_back({trips[i][1] , trips[i][0]});
            v.push_back({trips[i][2] , -trips[i][0]});
        }
        
        sort(v.begin() , v.end());
        int curr=0;
        
        for(int i=0;i<v.size();i++)
        {
           curr+=v[i].second;
            if(curr > capacity) return false;
        }
        return true;
        
    }
};