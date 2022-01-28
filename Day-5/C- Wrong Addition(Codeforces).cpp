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
    string a ,s ;
    cin>>a>>s;
    if(s==a){
        cout<<0<<endl;
        return;
    }
    
    ll i=a.length()-1;
    ll j=s.length()-1;
    
    string ans= "";
    while(i>=0 && j>=0)
    {
        if((s[j]-'0') - (a[i]-'0') >= 0)
        {
            ans+=(to_string((s[j]-'0') - (a[i]-'0')));
            i--;
            j--;
        }
        else{
            if(j>0){
               int x=(s[j-1]-'0')*10 + (s[j]-'0');
               if( (x - (a[i]-'0')) <= 9 && (x- (a[i]-'0') >=0)){
                ans+= to_string(x - (a[i]-'0') );
                i--;
                j-=2;
             }
            else{
             cout<<-1<<endl;
             return;
             }

            }
            else{
            cout<<-1<<endl;
            return;
            }

        }
        
    }
    if(i>=0 && j<0){
        cout<<-1<<endl;
        return;
    }
    else if(i<0 && j>=0){
        while(j>=0){
            ans+=s[j];
            j--;
        }
    }
    
    while(ans.back() == '0') {
      ans.pop_back();
    }
   reverse(ans.begin(),ans.end());
   
    //const regex pattern("^0+(?!$)");
 

   // ans = regex_replace(ans, pattern, "");
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
