
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
const int maxn = 2000100;
int com(pair<int,int> a, pair<int,int> b){
    if(a.ss<b.ss)return 1;
    if(a.ss>b.ss)return 0;
    return(a.ff>b.ff);
}
int main(){
        _ios;

        int mp[257];
        vector<pair<int,int>>v;
        char s[100000];
        int cs=0;
        for(cs = 0;;cs++){
            v.clear();

            if(!gets(s))break;
            if(cs>0)cout<<endl;
            fill(mp,0);
            for(int i = 0; s[i]!='\0'; i++){
                mp[s[i]]++;
            }

            for(int i = 0; i<256; i++){
                if(mp[i]!=0){
                    v.push_back({i,mp[i]});
                }
            }

            sort(all(v),com);
            for(auto x : v){
                cout<<x.ff<<' '<<x.ss<<endl;
            }
        }

return 0;
}

