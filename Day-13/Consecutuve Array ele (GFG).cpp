lass Solution{
	
	
	public:
	bool areConsecutives(long long arr[], int n) 
	{ 
	    // Your code goes here
	    unordered_map<long,long> mp;
	    for(long long i=0;i<n;i++){
	        mp[arr[i]]=0;
	    }
	    
	    long long min_ele=*min_element(arr, arr+n);
	    
	    for(long long i=min_ele ; i<=min_ele+n-1;i++)
	    {
	        if(mp.find(i)==mp.end()) return false;
	    }
	    return true;
	}