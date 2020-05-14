
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

#define INS(x) inserter(x,x.begin())

const int INF = 1e9 + 10;
const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

typedef set<int>Set;
map<Set,int>ID;
vector<Set>Setchek;

int getID(Set s){
    if(ID.count(s))return ID[s];
    Setchek.pb(s);
    return ID[s] = sz(Setchek) - 1;
}
int main(){
        _ios;

        int T; cin >> T;
        while(T--){
            stack<int>s;
            int n; cin >> n;
            string op;
            for(int i = 0; i<n;i++){
                cin >> op;
                char ch = op[0];
                if(ch=='P')s.push(getID(Set()));
                else if(ch=='D')s.push(s.top());
                else{
                    Set x1 = Setchek[s.top()]; s.pop();
                    Set x2 = Setchek[s.top()]; s.pop();
                    Set x;
                    if(ch=='U')set_union(all(x1),all(x2),INS(x));
                    else if(ch=='I')set_intersection(all(x1),all(x2),INS(x));
                    else if(ch=='A'){
                        x = x2;
                        x.insert(getID(x1));
                    }
                    s.push(getID(x));
                }
                cout<<Setchek[s.top()].size()<<endl;
            }
            cout<<"***"<<endl;

        }

return 0;
}





