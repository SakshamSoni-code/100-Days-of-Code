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
    
    vector<int> v1(n);
    int max_v1=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        max_v1= max(max_v1,v1[i]);
    }
    
    //vector<int> v2(n);
    int max_v2=0 , val=0;
    
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        val=max(val, min(v1[i], num));
        //cin>>v2[i];
        max_v2=max(max_v2,num);
    }
    cout<< max(max_v1, max_v2)*val<<endl;;
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
 