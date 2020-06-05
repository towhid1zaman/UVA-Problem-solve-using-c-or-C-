
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

map<char,ll> m;
void fillMap(){
    ll count=0;
    for(char i='0';i<='9';i++){
        m[i] = count++;
    }
    for(char i='A';i<='F';i++){
        m[i] = count++;
    }
}
ll toInt(string s){
    ll digit=0,ans=0;
    for(ll i=s.length()-1;i>=0;i--){
        ans+=pow(16,digit++)*m[s[i]];
    }
    return ans;
}
string toBinary(ll n){
    string s;
    if(n==0) s.push_back('0');
    while(n){
        if(n%2==0) s.push_back('0');
        else s.push_back('1');
        n/=2;
    }
    return s;
}

int main(){
        _
        int T; cin >> T;
        fillMap();
        while(T--){
            char c;
            string a,b;
            cin >> a >> c >> b;
            //decimal
            ll A = toInt(a);
            ll B = toInt(b);

            //ans
            ll ans;
            if(c=='+'){
                ans = A+B;
            }
            else if(c=='-'){
                ans = A-B;
            }

            //binary
            a = toBinary(A);
            b = toBinary(B);

            ll l1 = 13 - a.size();
            ll l2 = 13 - b.size();
            rep(i,l1)cout<<0;
            irep(i,sz(a)-1,0)cout<<a[i];
            cout<<' '<<c<<' ';
            rep(i,l2)cout<<0;
            irep(i,sz(b)-1,0)cout<<b[i];
            cout<<" = "<<ans<<endl;
        }

return 0;
}


