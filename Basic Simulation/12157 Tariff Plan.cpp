
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const int INF = 1e9 + 10;
const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int main(){
        _ios;

        int T; cin >> T;
        int cs = 1;
        while(T--){
            ll n; cin >> n;
            vll a(n);
            rep(i,n)cin >> a[i];
            ll mile = 0, juice = 0;
            rep(i,n){
                ll x = a[i];
                ll y = a[i];
                ll chek1=0;
                ll chek2=0;
                chek1 = ((x/30)+1);
                chek2 = ((y/60)+1);
                //cout<<chek1<<" "<<chek2<<endl;
                mile+=(chek1*10);
                juice+=(chek2*15);
            }
            //cout<<mile<<" "<<juice<<endl;
            if(mile==juice){
                cout<<"Case "<<cs++<<": Mile Juice "<<mile<<endl;
            }
            if(juice>mile){
                cout<<"Case "<<cs++<<": Mile "<<mile<<endl;
            }
            if(mile>juice){
                cout<<"Case "<<cs++<<": Juice "<<juice<<endl;
            }

        }


return 0;
}






