class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n) {
	    // code here
	    if(n==1) return {0,0};
	    int temp[n];
	    //copy(begin(arr), end(arr), begin(temp));
	    for(int i=0;i<n;i++){
	        temp[i]=arr[i];
	    }
	    
	    sort(temp, temp+n);
	    int i=0;
	    for(;i<n;i++)
	    {
	        if(arr[i]!=temp[i]){
	            break;
	        }
	    }
	    int j=n-1;
	    for(;j>=0;j--)
	    {
	        if(arr[j]!=temp[j]){
	            break;
	        }
	    }
	    vector<int> v={i,j};
	    return v;
	}
};