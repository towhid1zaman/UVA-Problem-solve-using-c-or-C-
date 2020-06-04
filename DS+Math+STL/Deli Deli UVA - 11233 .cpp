
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

bool isvowel(char ch){
    if(ch=='a' or ch=='e' or ch=='i' or ch == 'o' or ch=='u' or ch=='A' or ch=='E' or ch=='I' or ch == 'O' or ch=='U'){
        return true;
    }
    return false;
}

int main(){
        _
        int n,m; cin >> n >> m;
        map<string,string>mp;
        for(int i = 0; i<n; i++){
            string a,b; cin >> a >> b;
            mp[a] = b;
        }
        for(int i = 0; i<m; i++){
            string s; cin >> s;
            int len = s.size();
            if(mp[s]!="")cout<<mp[s]<<endl;
            else{
                if(s[len - 1]=='y' and !isvowel(s[len-2])){
                    s.erase(--s.end());
                    s+="ies";
                    cout<<s<<endl;
                    continue;
                }
                else if(s[len - 1]=='o' or s[len - 1]=='s' or (s[len - 1]=='h' and s[len-2]=='c') or (s[len - 1]=='h' and s[len-2]=='s') or s[len - 1]=='x'){
                    s+="es";
                    cout<<s<<endl;
                    continue;
                }
                else{
                    s+="s";
                    cout<<s<<endl;
                }
            }
        }

return 0;
}


