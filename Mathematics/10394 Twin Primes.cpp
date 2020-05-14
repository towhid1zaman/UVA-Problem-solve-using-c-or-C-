
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

int  Prime[20000100];
int  Twin[20000100];
void sieve(){
    int N = 20000100, sq = sqrt(N);
    memset(Prime, true, sizeof Prime);
    for(int i = 4; i<=N; i+=2){
        Prime[i] = 0;
    }
    for(int i = 3; i<=sq; i+=2){
        if(Prime[i]){
            for(int j = i*i; j<=N; j+=i){
                Prime [j] = 0;
            }
        }
    }
    Prime[1] = 0;
    Prime[0] = 0;
}

void twinCal(){
    int j = 1;
    for(int i = 3; i<=20000100; i++){
        if(Prime[i] and Prime[i+2]){
            Twin[j++] = i;
        }
    }
}
int main(){
        _ios;

        sieve();
        twinCal();
        int n;
        while(cin >> n){
            cout<<"("<<Twin[n]<<", "<<Twin[n]+2<<")"<<endl;
        }

return 0;
}
/*
    idea is first prime calculation of 2*10^7 then twin calculation, finally twin[n] and twin[n]+2

*/
