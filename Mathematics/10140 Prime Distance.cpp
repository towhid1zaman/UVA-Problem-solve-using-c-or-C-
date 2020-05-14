
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(ll i=0; i<a;i++)
#define rep1(i,a,b) for(ll i=(a);i<=(b);++i)
#define irep(i,b,a) for(ll i=(b);i>=(a);--i)
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
const ll mod = 1000000007; // (ll)1e9+7
const ll maxn = 1000001;

ll isPrime[1000001];
ll prime[1000001];
ll cnt;
void sieve(){
   isPrime[0] = isPrime[1] = 1;
   for(ll i = 2; i<=1000000; i++){
    if(!isPrime[i]){
        prime[cnt++] = i;
        for(ll j = i*2; j<=1000000; j+=i){
            isPrime[j] = 1;
        }
    }
   }
}

bool chekp(ll n){
    if(n<=100000){
        if(isPrime[n]==0)return true;
        else return false;
    }
    else{
        ll N = sqrt(n);
        for(ll i = 0; i<cnt and prime[i]<=N; i++){
            if(n%prime[i]==0)return false;
        }
    }
    return true;
}
int main(){
        //_ios;
        sieve();
        ll lo,hi;
        ll p1,p2,p3,p4;
        ll p,q;
        ll dis;
        while(cin >> lo >> hi){
            ll mn = 100000000;
            ll mx = -1;
            ll cnt = 0;
            ll f = 0;
            for(ll i = lo; i<=hi; i++){
                if(chekp(i)){
                    if(!f){
                        p = i;
                        f = 1;
                    }
                    else{
                        q = i;
                        dis = q-p;
                        if(dis<mn){
                            p1 = p;
                            p2 = q;
                            mn = dis;
                            cnt++;
                        }
                        if(dis>mx){
                            p3 = p;
                            p4 = q;
                            mx = dis;
                            cnt++;
                        }
                        p = q;
                    }
                }
            }
            if(cnt==0){
                cout<<"There are no adjacent primes."<<endl;
            }
            else{
                 cout<<p1<<","<<p2<<" are closest, "<<p3<<","<<p4<<" are most distant."<<endl;
            }
        }


return 0;
}
