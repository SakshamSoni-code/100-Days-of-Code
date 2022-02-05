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


bool checkt(int x, vector<int> &v){
    
    vector<int> temp;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]!=x)temp.push_back(v[i]);
    }
    
 
    
    
    int i=0,j=temp.size()-1;
    
    while(i<j){
        if(temp[i]!=temp[j]) return false;
        i++;
        j--;
    }
    return true;
}

void problem_solver()
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    int i=0,j=n-1;
    bool b=true;
    
    while(i<j){
        if(v[i]!=v[j]) b=false;
        i++;
        j--;
    }
    if(b==true){
        cout<<"YES"<<endl;
        return;
    }
    
    bool ans=false;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=v[n-i-1]){
            
            if(checkt(v[i],v)==true || checkt(v[n-i-1],v)==true){
                ans=true;
            }
            break;
        }
        
    }
    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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
