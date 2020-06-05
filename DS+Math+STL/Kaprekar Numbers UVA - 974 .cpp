
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) (v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;
const int maxn = 2000100;

bool kapre_check(ll n){
    ll pow = n*n;
    string s = to_string(pow);
    ll p = 0;
    while(p<s.length() - 1){
        string x;
        for(int i = 0; i<=p; ++i){
            x+=s[i];
        }
        string y;
        for(int i = p+1; i<s.length(); i++){
            y+=s[i];
        }
        ll a,b;
        a = stoi(x);
        b = stoi(y);
        if(a+b==n and a>0 and b>0)return true;
        p++;
    }
    return false;
}

int main(){
        _
        vll pre;
        for(ll i = 1; i<=40001;i++){
            if(kapre_check(i))pre.push_back(i);
        }

        ll T; cin >> T;
        int cs = 1;
        while(T--){
           cout<<"case #"<<cs<<endl;
           ll n,m; cin>> n >> m;
            bool f = false;

            for(int i = 0; i<pre.size(); i++){
                if(n<=pre[i] and pre[i]<=m){
                    cout<<pre[i]<<endl;
                    f = true;
                }
            }
            if(!f)cout<<"no kaprekar numbers"<<endl;
            cs++;
            if(T !=0)cout<<endl;
        }

return 0;
}


