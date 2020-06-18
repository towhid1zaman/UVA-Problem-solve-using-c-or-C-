
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
const int maxn = 2000100;

vector<int>adj[maxn];
bool vis[maxn];
int color[maxn];
void Reset(int n){
    rep(i,n+2){
        adj[i].clear();
        vis[i]= 0;
        color[i] = 0;
    }
}
bool flag;
int x,y;
void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s] = 1;
    color[s] = 1;
    flag = false;
    x = 1, y = 0;
    while(!q.empty()){
        int top = q.front();
        q.pop();
        for(int i = 0; i<adj[top].size(); i++){
            int next = adj[top][i];
            if(vis[next]==0){
                if(color[top] == 1) y++;
                else x++;
                color[next] = !color[top];
                vis[next] = 1;
                q.push(next);
            }
            if(color[top]==color[next]){
                flag = true;
                return;
            }
        }
    }
}

int main(){
        _
        int T; cin >> T;
        while(T--){
            int n,m; cin >> n >> m;
            Reset(n);
            while(m--){
                int a,b; cin >> a >>b;
                adj[a].pb(b);
                adj[b].pb(a);
            }
            int guards = 0;

            for(int i = 0; i<n; i++){
                if(!vis[i]){
                    bfs(i);
                    if(x==0 or y==0)guards+=1;
                    else guards+=min(x,y);
                    if(flag == true)break;
                }
            }


            if(flag==true)cout<<-1<<endl;
            else cout<<guards<<endl;
        }

return 0;
}
