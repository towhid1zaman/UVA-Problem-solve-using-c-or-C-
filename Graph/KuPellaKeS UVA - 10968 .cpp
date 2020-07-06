
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
const int maxn = 20005;

int degree[maxn];
int vis[maxn];
int dist[maxn];
vi adj[maxn];
int n,m;
void Reset(){
     rep(i,n+5){
          vis[i]=0;
          adj[i].clear();
          dist[i]=-1;
     }
}
int  bfs(int a, int b){
     if(a==-1 and b==-1)return 0;
     queue<int>q;
     q.push(a);
     dist[a] = 0;
     vis[a]=1;
     while(!q.empty()){
          int top = q.front();
          q.pop();
          for(int i  =0; i<adj[top].size(); i++){
               int next = adj[top][i];
               if(!vis[next] and degree[next]>2){
                    vis[next] = 1;
                    dist[next] = dist[top]+1;
                    q.push(next);
               }
               if(next==b)return dist[next];
          }
     }

     return -1;
}

void task(){

    while(cin >> n >> m){
          if(!n)break;
          Reset();
          while(m--){
               int u,v; cin >> u >> v;
               adj[u].pb(v);
               adj[v].pb(u);
          }
          int a,b;
          a=b=-1;
          for(int i = 1; i<=n; i++){
               degree[i] = adj[i].size();
               if(degree[i]<2){
                    cout << "Poor Koorosh" <<endl;
                    a = -2;
                    break;
               }
               if(degree[i]%2==1 and a==-1)a = i;
               else if(degree[i]%2==1 and b==-1)b = i;
          }
          if(a==-2)continue;
          int ans = bfs(a,b);
          if(ans==-1)cout << "Poor Koorosh" <<endl;
          else cout << ans << endl;
    }
}

int main(){
        _
        int T = 1; //cin >> T;
        while(T--){
            task();
        }
return 0;
}
/*
4 5
1 2
2 3
3 4
4 1
1 3
0 0
*/
