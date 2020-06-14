#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define endl "\n"

const int mod = 1000000007; // (int)1e9+7
const int N = 200100;
vector<int>ed[N];
bool bfs(int s)
{
    bool color[N];
    bool vis[N];
    memset(color,false,sizeof color);
    memset(vis, false , sizeof vis);
    queue<int>q;
    q.push(s);
    while(q.size()>0){
        int u = q.front();
        q.pop();
        for(int i = 0; i<ed[u].size();i++){
            int v = ed[u][i];
            if(vis[v]==false){
                color[v] = !color[u];
                vis[v] = true;
                q.push(v);
            }
            else if(color[v]==color[u]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int n;
    while(cin>>n){
        if(n==0)break;
        int e;
        cin>>e;
        for(int i = 1; i<=e;i++){
            int u,v;
            cin>>u>>v;
            ed[u].push_back(v);
            ed[v].push_back(u);
        }
        if(bfs(0)){
            cout<<"BICOLORABLE."<<endl;
        }
        else cout<<"NOT BICOLORABLE."<<endl;

        for(int i = 0; i<n;i++){
            ed[i].clear();
        }
    }



return 0;
}
