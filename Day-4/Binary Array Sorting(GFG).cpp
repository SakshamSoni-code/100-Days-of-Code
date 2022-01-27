class Solution{
    public:
    vector<int> SortBinaryArray(vector<int> binArray)
    {
        // Your code goes here 
        int i=0, j=binArray.size()-1;
        
        while(i<j){
            if(binArray[i]==1 && binArray[j]==0){
                binArray[i]=0;
                binArray[j]=1;
                i++;
                j--;
            }
            else if(binArray[i]==1 && binArray[j]==1){
                j--;
            }
            else if(binArray[i]==0 && binArray[j]==0) i++;
            else {
                i++;
                j--;
            }
        } 
        return binArray;
    }
};