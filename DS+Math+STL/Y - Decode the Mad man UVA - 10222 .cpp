
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
        char keyboard[47] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 91, 93, 92,
                     'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 59, 39,
                     'z', 'x', 'c', 'v', 'b', 'n', 'm', 44, 46, 47,
                     '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', 45, 61} ;

        string s;
        while(getline(cin, s, '\n')){
            for(int i = 0; i<sz(s); i++){
                if(s[i]>='A' and s[i]<='Z'){
                    s[i] = tolower(s[i]);
                }
                if(s[i]==' ' or s[i]=='\n'){
                    cout<<s[i];
                }
                else{
                    for(int j = 1; j<47; j++){
                        if(s[i]==keyboard[j]){
                            cout<<keyboard[j-2];
                            break;
                        }
                    }
                }
            }
            cout<<endl;
        }


return 0;
}

