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
vector<int>e[N];
set<int>nodes;
int d[N];
int bfs(int s, int ttl){
    memset(d, 0,sizeof d);
    d[s]=1;
    queue<pair<int,int> >q;
    q.push({s,ttl});
    int vis = 0;
    while(q.size()>0){
        int u = q.front().first;
         ttl = q.front().second;
        vis++;
        q.pop();
        if(ttl==0)continue;
        for(int i = 0; i<e[u].size();i++){
            int v = e[u][i];
            if(d[v]==0){
                d[v] = 1;
                q.push({v,ttl - 1});
            }
        }

    }

    return vis;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int t = 1;
    int edge;
    while(cin>>edge)
    {
        nodes.clear();
        if(edge==0)break;
        for(int i = 1; i<=edge;i++){
            int u,v;
            cin>>u>>v;
            e[u].push_back(v);
            e[v].push_back(u);
            nodes.insert(u);
            nodes.insert(v);
        }
        int source,ttl;
        while(cin>>source>>ttl){
            if(source==0 and ttl==0)break;
            //cout<<nodes.size() - bfs(source,ttl)<<endl;
            cout<<"Case "<<t<<": "<<nodes.size() - bfs(source,ttl)<<" nodes not reachable from node "<<source<<" with TTL = "<<ttl<<"."<<endl;
            t++;
        }
        for(auto x: nodes){
            e[x].clear();
        }

    }



return 0;
}




