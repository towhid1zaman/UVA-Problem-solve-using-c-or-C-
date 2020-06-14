
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
const int maxn = 20100;

map<string, vector<string>>adj;
map<string, string>par;
map<string, bool>vis;
vector<string>path;
queue<string>q;
void bfs(string s, string d){
    q.push(s);
    vis[s] = true;
    par[s] = s;
    while(!q.empty()){
        string u = q.front();
        q.pop();
        for(auto i = 0; i<adj[u].size(); i++){
            string v = adj[u][i];
            if(!vis[v]){
                par[v] = u;
                vis[v] = true;
                q.push(v);
            }
            if(v==d)return;
        }
    }
}
void Reset(){
    adj.clear();
    vis.clear();
    par.clear();
    path.clear();
    while(!q.empty()){
        q.pop();
    }
}
int main(){
        _
        int n, t=0;
        while(cin >> n){
        Reset();
        for(int i =1; i<=n; i++){
            string u,v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        par.clear();
        string s,d; cin >> s >> d;
        if(t)cout<<endl;
        t = 1;
        bfs(s,d);
        if(!vis[d]){
            cout<<"No route"<<endl;
        }
        else {
                path.push_back(d);
                while(1){
                    if(par[d]==s){
                        path.pb(s);
                        break;
                    }
                    d = par[d];
                    path.push_back(d);
                }
                reverse(path.begin(),path.end());
                for(int i = 0; i<path.size()-1; i++){
                    cout<<path[i]<<' '<<path[i+1]<<endl;
                }
        }
    }

return 0;
}

