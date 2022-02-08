class Solution {
public:
    int addDigits(int num) {
        
        //O(1) runtime
        
        if(num==0) return 0;
        
        else if(num%9==0) return 9;
        else return num%9;
        
        
       /* method 1
        
        int digitalRoot=0;
        
        while(num>0)
        {
            digitalRoot+=num%10;
            num/=10;
            
            if(num==0 && digitalRoot>9){
                num=digitalRoot;
                digitalRoot=0;
            }
        }
        return digitalRoot;  */
    }
};