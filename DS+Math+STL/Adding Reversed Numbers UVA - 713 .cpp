
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
#define _ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
        _ios;

        int t; cin >> t;
        while(t--){
            string a,b;
            cin >> a >> b;
            vector<int>c;
            int carry = 0;
            if(b.size()<a.size())swap(a,b);
            for(int i = a.size(); i<b.size(); i++){
                a+="0";
            }
            for(int i = 0; i<a.size(); i++){
                c.push_back(((a[i]-'0' + b[i]-'0' )+carry)%10);
                carry = (((a[i]-'0' + b[i]-'0' )+carry)/10);
            }
            if(carry!=0)c.push_back(carry);
            int zero = 1;
            for(auto x: c){
                if(zero and x==0)continue;
                zero = 0;
                cout<<x;
            }
            cout<<endl;
        }


return 0;
}

