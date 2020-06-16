
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
    rep(i,n+5){
        adj[i].clear();
        vis[i] = 0;
        color[i] = 0;
    }
}
bool bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s]  = 1;
    color[s] =1;
    while(!q.empty()){

        int tp = q.front();
        q.pop();
        for(int i = 0; i<adj[tp].size(); i++){
            int next = adj[tp][i];
            if(!vis[next]){
                if(color[tp]==1)color[next] = 2;
                else color[next] = 1;
                vis[next] = 1;
                q.push(next);
            }
            else{
                if(color[tp]==color[next])return false;
            }
        }
    }
    return true;
}
int main(){
        _
        int n;
        while(cin >> n){
            if(!n)break;
            Reset(n);
            int a,b;
            while(cin >> a >> b){
                if(!a and !b)break;
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
            if(bfs(1)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

return 0;
}


