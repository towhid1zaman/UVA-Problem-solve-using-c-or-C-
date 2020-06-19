
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
const int maxn = 9000;

vi adj[maxn];
int level[maxn];
int boom[maxn]; //boom means maximum number of employees
int vis[maxn];
void ResetAdj(){
    for(int i = 0; i<maxn; i++)adj[i].clear();
}
void ResetRest(){
    fill(level,0);
    fill(boom,0);
    fill(vis,0);
}

void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s] = 1;
    level[s] = 0;

    while(!q.empty()){
            int u = q.front();
            q.pop();

            for(int i = 0; i<adj[u].size(); i++){
                int v = adj[u][i];
                if(!vis[v]){
                    level[v] = level[u] + 1;
                    boom[level[v]]++; // Number of employees
                    vis[v] = 1;
                    q.push(v);
                }
            }
    }

}

int main(){
        _
        int Employee; cin >> Employee;
        ResetAdj();
        for(int a = 0; a<Employee; a++){
            int n; cin >> n;
            while(n--){
                int b; cin >> b;
                adj[a].pb(b); // directed
            }
        }

        int T; cin >> T;
        while(T--){
            ResetRest();
            int s; cin >> s;
            if(adj[s].size()==0){
                cout<<0<<endl;
                continue;
            }
            bfs(s);
            int mx = 0, day = 0;
            for(int i = 0; i<Employee; i++){
                if(boom[i]>mx){
                    mx = boom[i];
                    day = i;
                }
            }
            cout<<mx <<' '<< day<<endl;
        }

return 0;
}
/*

6
2 1 2
2 3 4
3 0 4 5
1 4
0
2 0 2
3
0
4
5
*/


