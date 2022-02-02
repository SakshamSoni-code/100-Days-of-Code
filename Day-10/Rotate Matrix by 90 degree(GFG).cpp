class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        // transpose
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // reverse columns
        for(int j=0;j<n;j++)
        {
            int low=0, high=n-1;
            while(low<high){
                swap(matrix[low][j] , matrix[high][j]);
                low++;
                high--;
            }
        }
    } 
};