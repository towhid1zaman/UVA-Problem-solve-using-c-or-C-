
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
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

map<string,string>p;
map<string,int>num;

string Find(string x){
    if(p[x]==x)return x;
    return p[x] = Find(p[x]);
}

void Union(string a, string b){
    string A = Find(a);
    string B = Find(b);
    if(A==B){
        cout<<num[B]<<endl;
        return;
    }
    num[B]+=num[A];
    num[A] = 0;
    p[A] = B;
    cout<<num[B]<<endl;
}

int main(){
        _
        int T; cin >> T;
        while(T--){
            p.clear();
            num.clear();
            int n; cin >> n;
            while(n--){
                string u,v; cin >> u >> v;
                if(!p.count(u))p[u] = u, num[u]=1;
                if(!p.count(v))p[v] = v, num[v]=1;
                Union(u,v);
                for(auto x: p){
                    cout<<x.ff<<' '<<x.ss<<endl;
                    cout<<num[x.ff]<<' '<<num[x.ss]<<endl;
                }cout<<endl;
            }
        }



return 0;
}
