
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 1000010;

int main(){
        _ios;
        int c[1000010];
        int n; cin >> n;
        int m,a,b;
        for(int k = 0; k<n; k++){
            if(k>0)cout<<endl;
            cin >> m;
            for(int i = 0; i<m;i++){
                cin >> a >> b;
                c[i]  = a+b;
            }
            for(int i = m-1; i>0;i--){
                if(c[i]>=10){
                    c[i-1]+=c[i]/10;
                    c[i]%=10;
                }
            }
            for(int i = 0; i<m; i++){
                cout<<c[i];
            }cout<<endl;
        }



return 0;
}
/*
My solution stores the sum of the two integers at each line into an array.
I then work backwards from the end of the array and do carry operations.
*/

