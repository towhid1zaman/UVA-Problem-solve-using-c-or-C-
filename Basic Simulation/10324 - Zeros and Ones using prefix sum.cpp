
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

int sum[maxn];
int main(){
        _ios;

        string s;
        int cs = 1;
        while(cin >> s){
            int len = sz(s);
            s = '0'+s;
            sum[0]=0;
            for(int i = 1; i<=len;i++){
                sum[i] = sum[i-1]+(s[i]=='1');
            }
            int n; cin >> n;
            cout<<"Case "<<cs++<<":"<<endl;
            while(n--){
                int l,r;
                cin >> l >> r;
                l++,r++;
                if(l>r)swap(l,r);
                if((sum[r]-sum[l-1])==0 or (sum[r]-sum[l-1])==(r-l+1)){
                    cout<<"Yes"<<endl;
                }
                else cout<<"No"<<endl;
            }
        }


return 0;
}






