  bool isprime[1000001];
  
  void seive(int n){
      int maxN=n+1;
      
      isprime[0]=isprime[1]=false;
      
      for(int i=2;i<=maxN;i++) isprime[i]=true;
      
      for(int i=2;i*i<=maxN;i++)
      {
          if(isprime[i]){
              for(int j=i*i;j<=maxN;j+=i){
                  isprime[j]=false;
              }
          }
      }
  } 
    vector<int> primeRange(int M, int N) {
        
        

        vector<int> ans;
        seive(N);
        for(int i=M ;i<=N;i++)
        {
            if(isprime[i]) ans.push_back(i);
        }
        return ans; 
    }