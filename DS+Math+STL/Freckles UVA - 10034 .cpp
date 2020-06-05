
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
#define unq(v) (v).erase(unique(all(v)),(v).end())
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

struct edges{
    double a,b,cost;
};

edges adj[maxn];
int p[maxn];

bool cmp(edges a, edges b){
    if(a.cost<b.cost)return true;
    else return false;
}

double Find(double x){
    if(p[x]==x)return x;
    return p[x] = Find(p[x]);
}

void Union(double a, double b){
    p[Find(b)] = Find(a);
}
int main(){
        io;
        sp(2);
        int T; cin >> T;
        while(T--){
            int n; cin >>n;
            for(int i = 1; i<=n;i++){
                p[i] = i;
            }
            for(int i = 0; i<n; i++){
                cin >> edges.a>>edges.b;
            }
            for(int i = 0; i<n; i++){
                edges
            }

        }


return 0;
}
/*

applications of MST
*/
