#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = 200010;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int t;
    cin>>t;
    rep(i, 1, t){
        int n;
        cin>>n;

        int v[n+1];
        for(int i = 0; i<n;i++){
            cin>>v[i];

        }
        int mx = 0;
        int mn = 0;
        for(int i = 1; i<n;i++){
            if(v[i]>v[i-1])mx++;
            else if(v[i]<v[i-1])mn++;
        }
        cout<<"Case "<<i<<": "<<mx<<" "<<mn<<endl;
    }




return 0;
}


