
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
const int maxn = 200;

struct node{
    int val;
    int cost;
};
vector<node>adj[maxn];
bool vis[maxn];
int dis[maxn];

void Reset(){
    for(int i = 0; i<maxn; i++){
        adj[i].clear();
        vis[i] = 0;
        dis[i] = inf;
    }
}

bool operator<(node x ,  node y){
        //The maximum cost will be popped last
        return (x.cost > y.cost);
}

int  Dijkstra(int sourse, int Time){

        priority_queue<node>pq;
        pq.push({sourse,0});

        int cnt = 0;

        while(!pq.empty()){
            node current = pq.top();
            pq.pop();

            int val = current.val;
            int cost = current.cost;

            if(vis[val]==1)continue;

            dis[val] = cost; // cost is finalized here
            vis[val] = 1;

            if(dis[val]<=Time)cnt++;

            //traversing val's childs/leafs
            for(int i = 0; i<adj[val].size(); i++){
                int next = adj[val][i].val;
                int nextcost = adj[val][i].cost;

                if(vis[next]==0){
                    pq.push({next,cost+nextcost});
                }
            }
        }

        return cnt;
}


int main(){
        _
        int T; cin >> T;
        for(int cs = 1; cs <= T; cs++){
                Reset();
                int n,e,t; cin >> n >> e >>t;
                int m;  cin >> m;
                for(int i = 1; i<=m; i++){
                    int u,v,w; cin >> u >> v >> w;
                    ///reverse the edge
                    adj[v].push_back({u,w});
                }

                int ans = Dijkstra(e,t);
                if(cs>1)cout<<endl;
                cout<<ans<<endl;

        }


return 0;
}


