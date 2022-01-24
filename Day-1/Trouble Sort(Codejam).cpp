/*
Approach: -- when we do swapping in every subarray b|w 1st and last ele of that subarray then at the end ele at odd indices will remain at odd 
          -- and ele at even idices will remain at even 
          -- we will separate all the ele at odd indices into a new array and sort it
          -- above step we will do for even indices
          -- after that we wiill combine these two arrays into a single array and check if it is sorted or not
Question: Trouble Sort
Platform: Codejam

*/
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
#define codejam cout<<"Case #" << t << ": "

const ll mod = 1000000007; //10^9+7

using namespace std;

void problem_solver(int t)
{
    int n;
    cin>>n;
    
    vector<ll> arr(n);
    vector<ll> odd;
    vector<ll> even;
    for(int i=0;i<n;i++) cin>>arr[i];
    
    for(int i=0;i<n;i++)
    {
        if(i%2!=0) odd.push_back(arr[i]);
        else even.push_back(arr[i]);
    }
    sort(odd.begin(),odd.end());
    sort(even.begin(),even.end());
    
    int index=0;
    for(int i=0;i<n;i+=2){
        arr[i]=even[index];
        index++;
    }
    
    int index2=0;
    for(int i=1;i<n;i+=2){
        arr[i]=odd[index2];
        index2++;
    }
    
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]){
            codejam <<i<<endl;
            return;
        }
    }
    codejam << "OK"<<endl;
}

int32_t main() {
    
    fast;
    ll t;
    cin>>t;
    int test = 1;
    while(t--)
    {
        problem_solver(test);
        test ++;
    }


  return 0;
}






/*------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/
