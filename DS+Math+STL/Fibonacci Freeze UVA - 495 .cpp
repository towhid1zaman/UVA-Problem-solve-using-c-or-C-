
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ll;
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
const int S = 6000;

vector <int> Fib[S], addition;

void Fib_Number(){
    Fib[0].push_back(0);
    Fib[1].push_back(1);
    for(int i = 2; i < S; i++){
        int sz1 = Fib[i-2].size()-1;
        int sz2 = Fib[i-1].size()-1;
        int tmp, ad, c = 0;
        while(sz1 >= 0 && sz2 >= 0){
            ad = c+Fib[i-2][sz1]+Fib[i-1][sz2];
            if(ad > 9){
                c = ad/10;
                ad %= 10;
            }
            else c = 0;
            addition.push_back(ad);
            sz1--, sz2--;
        }
        if(sz1 >= 0){
            while(sz1 >= 0){
                ad = c+Fib[i-2][sz1];
                if(ad > 9){
                    c = ad/10;
                    ad %= 10;
                }
                else c = 0;
                addition.push_back(ad);
                sz1--;
            }
        }
        if(sz2 >= 0){
            while(sz2 >= 0){
                ad = c+Fib[i-1][sz2];
                if(ad > 9){
                    c = ad/10;
                    ad %= 10;
                }
                else c = 0;
                addition.push_back(ad);
                sz2--;
            }
        }
        if(c)addition.push_back(c);
        int sz = addition.size();
        for(int z = sz-1; z >= 0; z--)Fib[i].push_back(addition[z]);
        addition.clear();
    }
}
int main(){
        _
        Fib_Number();
        int n;
        while(cin >> n){
            int sz = Fib[n].size();
            cout << "The Fibonacci number for " << n << " is ";
            for(int i = 0; i < sz; i++)cout << Fib[n][i];
            puts("");
        }

return 0;
}


