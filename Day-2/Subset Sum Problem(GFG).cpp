// Probelm: subset sum problem
// Aproach: using recursion
// t.c-> o(2^n)  s.c->o(n)


static bool subsetSum(int N, int arr[], int sum, int ind, int s, vector<int> &ds){
        if(ind==N){
            if(s==sum){
                return true;
            }
            else return false;
            
        }
        
        ds.push_back(arr[ind]);
        s+=arr[ind];
        if(subsetSum(N,arr,sum,ind+1,s,ds)==true){
            return true;
        }
        
        ds.pop_back();
        s-=arr[ind];
        if(subsetSum(N,arr,sum,ind+1,s,ds)==true) {
         return true;   
        }
        return false;
    }
    bool isSubsetSum(int N, int arr[], int sum){
        vector<int> ds;
        return subsetSum(N,arr,sum,0,0,ds);
        
    }