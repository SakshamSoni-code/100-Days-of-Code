// Probelm: Count subsets with given sum
// Aproach: using recursion
// t.c-> o(2^n)  s.c->o(n)


int countSubsets(int arr[], int n, int sum, int s, int ind){
	    if(ind==n){
	        if(s==sum) return 1;
	        else return 0;
	    }
	    s+=arr[ind];
	    int l=countSubsets(arr,n,sum,s,ind+1);
	    
	    s-=arr[ind];
	    int r=countSubsets(arr,n,sum,s,ind+1);
	    
	    return l+r;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes herebse
        return countSubsets(arr,n,sum,0,0);
	}