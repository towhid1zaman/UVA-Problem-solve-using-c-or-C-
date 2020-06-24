
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef vector<pii>vip;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 2000100;

map<string, vector<string>>adj;
map<string,int>vis;
map<string, string>par;

void bfs(string s){
    queue<string>q;
    q.push(s);
    vis[s] = 1;
    while(!q.empty()){
        string top = q.front();
        q.pop();
        for(int i= 0; i<adj[top].size(); i++){
            string next = adj[top][i];
            if(vis.count(next)==0){
                vis[next] = vis[top] + 1;
                q.push(next);
                par[next] = top;
            }
        }
    }
}

int main(){
        _
        int T; cin >> T;
        int nl=0;
        while(T--){
            if(nl)cout<<endl;
            nl = 1;
            adj.clear();
            int m,n; cin >> m >> n;

            for(int i = 0; i<m; i++){
                string u,v; cin >> u >> v;
                adj[u].push_back(v);
                adj[v].push_back(u);
            }

            while(n--){
                string s,d; cin >> s >> d;
                par.clear();
                vis.clear();
                bfs(s);
                vector<string>path;
                path.push_back(d);
                while(1){
                    path.push_back(par[d]);
                    d = par[d];
                    if(d==s)break;
                }
                //printing first letter
                reverse(all(path));
                for(int i = 0; i<path.size(); i++){
                    cout << path[i][0];
                }
                cout<<endl;
                path.clear();
            }
        }


return 0;
}


