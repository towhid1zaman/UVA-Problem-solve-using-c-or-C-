#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = 25;
vector<int>node[N];
int d[N];
void bfs(int start, int des)
{
    memset(d, -1, sizeof d);
    queue<int>q;
    q.push(start);
    d[start] = 0;
    while(q.size()>0)
    {
        int u = q.front();
        q.pop();
        for(int i = 0; i<node[u].size();i++){
            int v = node[u][i];
            if(d[v]==-1)
            {
                d[v] = d[u]+1;
                q.push(v);
            }
        }
    }
    //cout<<start<<" to "<<des<<": "<<d[des]<<endl;
    printf("%2d to %2d: %d\n",start, des, d[des]);

}
int main(){
    int t=0;
//    cin>>t;
    int n,e;
    int q,start,des;
    while(cin>>n){
            for(int i =0; i<=20; i++){
                node[i].clear();
            }
        while(n--){
            cin>>e;
            node[1].push_back(e);
            node[e].push_back(1);
        }
        for(int i = 2; i<=19;i++){
            cin>>n;
                while(n--){
                    cin>>e;
                    node[e].push_back(i);
                    node[i].push_back(e);
                }
        }

        cin>>q;
        cout<<"Test Set #"<<++t<<endl;
        while(q--){
            cin>>start>>des;
            bfs(start,des);
        }
        cout<<endl;
    }

return 0;
}
/*
1 3
2 3 4
3 4 5 6
1 6
1 7
2 12 13
1 8
2 9 10
1 11
1 11
2 12 17
1 14
2 14 15
2 15 16
1 16
1 19
2 18 19
1 20
1 20
5
1 20
2 9
19 5
18 19
16 20
4 2 3 5 6
1 4
3 4 10 5
5 10 11 12 19 18
2 6 7
2 7 8
2 9 10
1 9
1 10
2 11 14
3 12 13 14
3 18 17 13
4 14 15 16 17
0
0
0
2 18 20
1 19
1 20 6
1 20
8 20
15 16
11 4
7 13
2 16
*/

