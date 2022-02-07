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
    int n,q;
    cin>>n>>q;
    
    string s;
    cin>>s;
    
    int curr=0;
    for(int i=0;i<n-2;i++)
    {
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c'){
            curr++;
        }
    }
    
    int i;
    char c;
    while(q--){
      cin>>i>>c;
      i--;
      
      curr-=(i+2 <n && s[i]=='a' && s[i+1]=='b' && s[i+2]=='c');
      curr-=(i-2 >=0 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c');
      curr-=(i-1>=0 && i+1 <n && s[i-1]=='a' && s[i]=='b' && s[i+1]=='c');
      
      s[i]=c;
      curr+=(i+2 <n && s[i]=='a' && s[i+1]=='b' && s[i+2]=='c');
      curr+=(i-2 >=0 && s[i-2]=='a' && s[i-1]=='b' && s[i]=='c');
      curr+=(i-1>=0 && i+1 <n && s[i-1]=='a' && s[i]=='b' && s[i+1]=='c'); 
      
      cout<<curr<<endl;
        

    }
}

int32_t main() {
    
    fast;
    problem_solver();


  return 0;
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
