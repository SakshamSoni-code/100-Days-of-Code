class Solution {
public:
    long long smallestNumber(long long num) {
        
     string ans=to_string(num);
     
        if(ans.size()==1 || ans[0]=='-'){
            sort(ans.begin()+1, ans.end(), greater<int>());
        }
        else{
            sort(ans.begin() , ans.end());
            swap(ans[0], ans[ans.find_first_not_of('0')]);
        }
        return stoll(ans);
       
     /*my appraoch
      if(num==0) return 0;
        vector<long long> v;
    
    long long temp=num;
    if(num<0){
        num=(-1*num);
    }
    
    while(num>0){
        v.push_back(num%10);
        num/=10;
    }
    
    
    sort(v.begin(),v.end());
    string s="";

    
    if(temp<0){
        for(long long i=v.size()-1;i>=0;i--){
            s+=to_string(v[i]);
        }
        s.insert(0,1,'-');
        num=stoll(s, nullptr , 10);
        return num;
    }
    
    long long cnt=0;
    for(long long i=0;i<v.size();i++)
    {
        if(v[i]!=0){
            s=s+to_string(v[i]);
        }
        else cnt++;
    }
    
    if(cnt>0) s.insert(1 , cnt , '0');
    num=stoll(s , nullptr , 10);
        return num; */
    }
};