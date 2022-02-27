class Solution {
public:
    static bool ansPossible(vector<int>& time, long long trips , int totalTrips){
        long long total=0;
        for(long long i=0;i<time.size();i++){
            total += trips/time[i];
        }
        //cout<<total<<endl;
        if(total >= totalTrips) return true;
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        sort(time.begin() , time.end());
        
        long long low=time[0] , high=100000000000001, ans=0;
        
        while(low <= high){
            long long mid= low +(high - low)/2;
           // cout<<mid<<endl;
            
            if(ansPossible(time, mid, totalTrips)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};