
#include<bits/stdc++.h>


#define fast       ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

void problem_solver()
{
    int n;
    cin>>n;
    
    
    
    
    string s;
    cin>>s;
    
    int size= s.size();
    
    while(0){
        cout<<"";
    }
    
    if(size==1){
        cout<<"YES"<<endl;
        
        return;
    }
    
    else if (size==2)
    {
        if(s[0]!=s[1])
        {
            cout<<"YES"<<endl;
            return;
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    
    else
    {
        cout<<"NO"<<endl;
        return;
    }
}

int32_t main() {
    
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        problem_solver();
    }


  return 0;
}






