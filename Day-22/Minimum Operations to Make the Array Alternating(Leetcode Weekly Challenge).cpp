class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int freqEven[100001]={0};
        int freqOdd[100001]={0};
        int n=nums.size();
        
        int maxe=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0){
                freqEven[nums[i]]++;
            }
            else{
                freqOdd[nums[i]]++;
            }
            
            maxe=max(maxe , nums[i]);
        }
        
        int firstMaxEven=0 , freqFirstMaxEven=0;
        int firstMaxOdd=0 , freqFirstMaxOdd=0;
        
        int secondMaxEven=0 , freqSecondMaxEven=0;
        int secondMaxOdd=0 , freqSecondMaxOdd=0;  
        
        
        for(int i=1;i<=maxe;i++)
        {
            if(freqEven[i] >= freqFirstMaxEven){
                secondMaxEven=firstMaxEven;
                freqSecondMaxEven=freqFirstMaxEven;
                
                firstMaxEven=i;
                freqFirstMaxEven=freqEven[i];
            }
            
            else if(freqEven[i] > freqSecondMaxEven){
                freqSecondMaxEven=freqEven[i];
                secondMaxEven=i;
            }
            
            
            if(freqOdd[i] >= freqFirstMaxOdd){
                secondMaxOdd=firstMaxOdd;
                freqSecondMaxOdd=freqFirstMaxOdd;
                
                firstMaxOdd=i;
                freqFirstMaxOdd=freqOdd[i];
            }
            
            else if(freqOdd[i] > freqSecondMaxOdd){
                freqSecondMaxOdd=freqOdd[i];
                secondMaxOdd=i;
            }
        }
        
        if(firstMaxEven != firstMaxOdd){
            return n-freqFirstMaxEven-freqFirstMaxOdd;
        }
        
        return min(n-freqFirstMaxEven-freqSecondMaxOdd , n-freqSecondMaxEven-freqFirstMaxOdd);

    }
};