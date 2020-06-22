
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


map<string, int > adj;
map<string, int > vis;
map<string, int > cost;
vector<string>List;
int len = 0;
int bfs(string first, string last){
    vis[first] = 1;
    cost[first] = 0;
    len = List.size();
    queue<string>q;
    q.push(first);

    while(!q.empty()){
        string top = q.front();
        if(top==last){
            return cost[top];
        }
        q.pop();
        for(int i = 0; i<len; i++){
            string next = List[i];

            if(vis[next]==0 and top.length()==next.length()){
                int missChar = 0;
                for(int j = 0; j<top.length(); j++){
                    if(top[j] != next[j])missChar++;
                }

                if(missChar == 1){
                    vis[next] = 1;
                    cost[next] = cost[top] + 1;
                    q.push(next);
                }
            }
        }
    }

}

int main(){
        _
        int T; cin >> T;
        bool line = false;
        while(T--){
            string s;
            while(cin >> s and s!="*"){
                List.pb(s);
            }
            if(line)cout << endl;
            line = true;
            string first,last,take;
            cin >> ws;
            while(getline(cin,take)){
                if(take=="")break;
                vis.clear(),cost.clear();
                stringstream ss;
                ss<<take;
                ss>>first>>last;
                int ans = bfs(first, last);
                cout<<first<<' '<<last<<' '<<ans<<endl;
            }
        }


return 0;
}

