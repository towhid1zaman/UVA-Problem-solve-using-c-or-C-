
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


bool isPrime[1000101];
void sieve(){
    int N = 1000100, sq = sqrt(N);
    memset(isPrime, true, sizeof isPrime);
    for(int i = 4; i<=N; i+=2){
        isPrime[i] = 0;
    }
    for(int i = 3; i<=sq; i+=2){
        if(isPrime[i]){
            for(int j = i*i; j<=N; j+=i){
                isPrime [j] = 0;
            }
        }
    }
    isPrime[1] = 0;
    isPrime[0] = 0;
}
int main(){
        _
        sieve();
        int T; cin >> T;
        for(int cs = 1; cs<=T; cs++){
            string s;
            cin >> s;
            map<char, ll>mp;
            for(int i = 0; i<sz(s); i++){
                    mp[s[i]]++;
            }
            cout<<"Case "<<cs<<": ";
            bool f = 0;
            for(auto x: mp){
                if(isPrime[x.ss]){
                    f = 1;
                    cout<<x.ff;
                }
            }
            if(f){
                cout<<endl;
                continue;
            }
            else cout<<"empty"<<endl;
            mp.clear();
        }

return 0;
}


