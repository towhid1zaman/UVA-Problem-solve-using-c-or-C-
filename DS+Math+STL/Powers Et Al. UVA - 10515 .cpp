
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

/*
    last digit of m^n , range(<=10^101)
*/

int main(){
        _
        string a,b;
        while(cin>>a>>b){
            if(a=="0" and b=="0")break;
            int len1  = a.length();
            int len2  = b.length();

            int m = a[len1-1]-'0';
            int n = b[len2-1]-'0';
            if(len2>1){
                n = n + (b[len2-2]-'0')*10;
            }
            if(n%4==0) n = 4;
            else n = n%4;

            int res = (int)pow(m,n)%10;
            cout << res << endl;

        }

return 0;
}


