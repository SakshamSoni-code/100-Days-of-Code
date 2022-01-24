/* aproach : using my own comparartor function
   t.c-> o(nlogn)  s.c-> O(n) 
   problem: Sorting Elements of an Array by Frequency
   platform: GFG  */
   
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


/* aproach : using my own comparartor function
t.c-> o(nlogn)  s.c-> O(n) */
bool comp(pair<int,int> &p1, pair<int,int> &p2){
    if(p1.second!=p2.second){
        return p1.second>p2.second;
    }
    else return p1.first<p2.first;
}


void problem_solver()
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    map<int,int> mp;
    
    for(int i=0;i<n;i++) mp[v[i]]++;
    
    vector<pair<int,int>> trip(n);
    
    for(int i=0;i<n;i++)
    {
        
        trip[i].first=v[i];
        trip[i].second=mp[v[i]];
    }
    sort(trip.begin(),trip.end(),comp);
    
    for(int i=0;i<n;i++)
    {
        cout<<trip[i].first<<" ";
    }
    cout<<endl;
    
    
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
