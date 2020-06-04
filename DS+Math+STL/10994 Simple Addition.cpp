
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
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
const int maxn = 2000100;
ll res = 0;
ll F(ll n){
    if(n==0)return 0;
    if(n%10 > 0)return n%10;
    else return F(n/10);
}
void S(ll p, ll q){
    if((q-p)<9){
        for(int i = p; i<=q; i++){
        res+=F(i);
    }
    return;
    }
    while(p%10){
        res+=F(p);
        p++;
    }
    while(q%10){
        res+=F(q);
        q--;
    }
    res+=45*(q-p)/10;
    S(p/10,q/10);
}
int main(){
        _
        ll p,q;
        while(cin >> p >> q){
            if(p==-1 and q==-1)break;
            res = 0;
            S(p,q);
            cout<<res<<endl;
        }


return 0;
}

