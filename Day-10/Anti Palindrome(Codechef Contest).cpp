/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/

/*---------------------------------*//******GIVE YOUR BEST AND FORGET THE REST*****/



//----------SAKSHAM SONI---------
#include<bits/stdc++.h>


#define fast       ios::sync_with_stdio(0); cin.tie(0)
#define testcase    ll t;cin>>t;while(t--)
#define fw(i,a,b)   for(int i=a;i<b;i++)
#define fw1(i,a,b)  for(int i=a;i<=b;i++)
#define bw(i,a,b)   for(i=a;i>b;i--)
#define bw1(i,a,b)  for(i=a;i>=b;i--)
#define pb          push_back
#define vec         vector<ll>
#define pll       pair<ll,ll>
#define mll         map<ll,ll>
#define F           first
#define S           second
#define lcm(a,b)    (a*b)/(__gcd(a,b))
#define yes         cout<<"YES"<<endl
#define no          cout<<"NO"<<endl
#define prt(x)      cout<<x
#define prts(x)     cout<<x<<" "
#define prtl(x)     cout<<x<<endl
#define prtnl()     cout<<"\n"
#define endl        "\n"
#define ll long long
#define check       cout<<checkedDude<<endl

const ll mod = 1000000007; //10^9+7

using namespace std;

void problem_solver()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    
    if(n%2 !=0){
        cout<<"NO"<<endl;
        return;
    }
    
    if(n==2){
        if(s[0]==s[1]){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            cout<<s<<endl;
            return;
        }
    }
    
    map<char,int> mp;
    
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    
      set<pair<int,char>> st;
        
        for(auto it : mp){
            st.insert(make_pair(it.second ,it.first));
        }
        auto i=st.end();
        i--;
        
        if(i->first > s.length()/2){
            cout<<"NO"<<endl;
            return;
        }
        string ans="";
        for(auto it=st.begin();it!=st.end();it++)
        {
          while(it->first>0){
              ans+=it->second;
              int freq=it->first;
              char c=it->second;
              st.erase(it);
              freq--;
              if(freq==0){
                  break;
              }
              if(freq!=0) st.insert(make_pair(freq,c));
              
          }  
        }
        reverse(ans.begin(),ans.begin()+ans.length()/2);
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    
    
}

int32_t main() {
    
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        problem_solver();
    }


  return 0;
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
