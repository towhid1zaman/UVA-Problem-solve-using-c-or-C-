
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
const int maxn = 2000100;



int main(){
        _

        double x1,x2,x3,x4,y1,y2,y3,y4;
        sp(3);
        while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4){
            if(x1==x3 and y1==y3){
                cout<<(x2+x4) - x1<<' '<<(y2+y4) - y3<<endl;
            }
            else if(x2==x4 and y2==y4){
                cout<<(x1+x3) - x2<<' '<<(y1+y3) - y2<<endl;
            }
            else if(x1==x4 and y1==y4){
                cout<<(x2+x3)-x1<<' '<<(y2+y3)-y1<<endl;
            }
            else if(x2==x3 and y2==y3){
                cout<<(x1+x4)-x2<<' '<<(y1+y4)-y2<<endl;
            }
        }

return 0;
}


