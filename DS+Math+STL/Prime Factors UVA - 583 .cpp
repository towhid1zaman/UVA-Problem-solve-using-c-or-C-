
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
        int n;
        bool f = 0;
        while(cin >> n){
            if(n==0)break;
            int N = n;
            if(n<0)f = 1, n = abs(n);
            vector<int>factors;
            for(int i = 2; i<=n/i; i++){
                if(n%i !=0)continue;
                while(n%i==0){
                    factors.push_back(i);
                    n/=i;
                }
            }
            if(n>1){
                factors.push_back(n);
            }
            cout<<N<<" = ";
            if(f)cout<<"-1 x ";
            for(int i = 0; i<factors.size(); i++){
                cout<<factors[i];
                if(i<sz(factors)-1)cout<<" x ";
            }
            cout<<endl;
            f=0;
            factors.clear();
        }

return 0;
}


