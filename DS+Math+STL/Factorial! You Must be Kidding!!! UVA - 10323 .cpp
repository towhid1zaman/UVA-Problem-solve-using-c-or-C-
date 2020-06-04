
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

ll dp[200000];
ll solve(ll n){
    if(n==0){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n] = n* solve(n-1);/// n! = n*(n-1);

    return dp[n];
}
int main(){
        //_ios;
        //fill(dp,-1);
        ll n;
        while(cin >>n){

            if((n>=0 and n<=7 ) or (n<0 and n%2==0)){
                cout<<"Underflow!"<<endl;
            }
            else if(n>13  or (n<0 and n%2!=0)){
                    cout<<"Overflow!"<<endl;
            }
            else{
                ll res = n;
                for(ll i = 1; i<n; i++)res*=i;
                cout<<res<<endl;
            }

        }

return 0;
}
/*
if the input is between 8 to 13, print {\displaystyle n!}{\displaystyle n!}.
It's always overflow if {\displaystyle n\geq 14}{\displaystyle n\geq 14},
and always underflow from 0 to 7. For negative numbers,
negative odd numbers are overflows, and negative even numbers are underflows.

*/

