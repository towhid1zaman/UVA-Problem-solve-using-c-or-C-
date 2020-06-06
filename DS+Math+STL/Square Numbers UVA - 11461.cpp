
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
const int maxn = 200100;
int a[maxn];
int main(){
        _ios;
        fill(a,0);
        for(int i  = 1; i<=maxn;i++){
            int x = sqrt(i);
          //  cout<<x<<endl;
            if(x*x==i){
                a[i] = 1;
            }
        }
    //    for(int i = 1; i<10;i++){
    //        cout<<a[i]<<" ";
    //    }
        for(int i = 1; i<=maxn;i++){
            a[i]+=a[i-1];
        }
        int x,y;
        while(cin>>x>>y){
            if(x==0 and y==0){
                    break;
            }
            cout<<a[y]- a[x-1]<<endl;
        }





return 0;
}

/* pre calculation */
