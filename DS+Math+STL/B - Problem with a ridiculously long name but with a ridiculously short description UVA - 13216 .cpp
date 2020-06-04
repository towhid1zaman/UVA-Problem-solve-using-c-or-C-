
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
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
const int maxn = 2000100;

int main(){
        _
        //x = pow(66,n)%100; m[n]=x
        map<int,int>m;
        m[0] = 76;
        m[1] = 16;
        m[2] = 56;
        m[3] = 96;
        m[4] = 36;
        m[5] = 76;
        m[6] = 16;
        m[7] = 56;
        m[8] = 96;
        m[9] = 36;
        int T; cin >> T;
        while(T--){
            string s; cin>> s;
            int n = s.size();
            if(s=="0")cout<<1<<endl;
            else if(s=="1")cout<<66<<endl;
            else cout<<m[s[n-1]-'0']<<endl;
        }

return 0;
}

