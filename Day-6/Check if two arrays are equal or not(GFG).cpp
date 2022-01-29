class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        if(A.size()!=B.size()) return false;
        map<int,int> mp;
        for(int i=0;i<A.size();i++)
        {
            mp[A[i]]++;
        }
        
        for(int i=0;i<B.size();i++)
        {
            if(mp.find(B[i])!=mp.end()){
                mp[B[i]]--;
                if(mp[B[i]]==0)
                {
                    mp.erase(B[i]);
                }
            }
            else{
                return false;
            }
        }
    if (mp.empty()) {
        return true;
    }
    else {
        return false;
    }
    }
};