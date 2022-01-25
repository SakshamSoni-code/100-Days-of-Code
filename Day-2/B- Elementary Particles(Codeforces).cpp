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
    
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int> temp(n);
    temp=v;
    
    sort(temp.begin(),temp.end());
    bool b=false;
    for(int i=0;i<n-1;i++)
    {
        if(temp[i]==temp[i+1]) b=true;
    }
    if(b==false){
        cout<<-1<<endl;
        return;
    }
    map<int,int> mp;
    
    int ans=INT_MAX,min_i,min_j;
    for(int i=0;i<n;i++)
    {
        if(mp.find(v[i])!=mp.end()){
            if(ans>(i-mp[v[i]])){
                ans=i-mp[v[i]];
                min_i=mp[v[i]];
                min_j=i;
            }
            mp[v[i]]=i;
        }
        else{
            mp[v[i]]=i;
        }
        
    }
    
   
    cout<<((n-1)-min_j)+min_i+1<<endl;
    
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
