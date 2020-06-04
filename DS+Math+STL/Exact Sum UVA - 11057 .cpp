
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
        while(cin >> n){
            vi books(n,0);
            int sub, a,b;
            for(int i  = 0; i<n; i++){
                cin >> books[i];
            }
            int m;
            cin >> m;
            int dif = m;
            for(int i = 0 ; i<n; i++){
                if(books[i]>=m)continue;
                for(int j = 0; j<n;j++){
                    if(i==j and books[j]>=m)continue;
                    if(books[i]+books[j]==m){
                        sub = books[i] - books[j];
                        sub = abs(sub);
                        if(sub<dif){
                            dif = books[i] - books[j];
                            dif = abs(dif);
                            a = books[i];
                            b = books[j];
                        }
                    }
                }
            }
            if(a>b)swap(a,b);
            cout<<"Peter should buy books whose prices are "<<a<<" and "<<b<<"."<<endl<<endl;
        }


return 0;
}


