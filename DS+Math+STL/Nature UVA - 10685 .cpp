
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
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
const int maxn = 2000100;

int p[maxn];
int depth[maxn];
int Find(int x){
    if(p[x]==x)return x;
    return p[x] = Find(p[x]);
}
void Union(int a,int b){
    //p[Find(b)] = Find(a);
    int A = Find(a);
    int B = Find(b);
    if(A!=B){
        p[Find(b)] = Find(a);
        depth[A]+=depth[B];
    }
}

int main(){
        _
        int c,r;
        while(cin >> c >> r){
            if(c==0 and r==0)break;
            string animal;
            map<string, int >chain;
            for(int i = 1; i<=c; i++){
                cin >> animal;
                chain[animal] = i;
                p[i] = i;
                depth[i] = 1;
            }

            for(int i = 1; i<=r; i++){
                string inferior,preditor; cin >> inferior >> preditor;
                Union(chain[inferior],chain[preditor]);
            }
            int max_chain = 0;
            for(int i = 1; i<=c; i++){
                max_chain = max(max_chain,depth[i]);
            }
            cout<<max_chain<<endl;
        }


return 0;
}

/*
Basic DSU problem


*/
