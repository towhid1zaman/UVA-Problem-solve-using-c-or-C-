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
vi v(N);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        //vi v(n+5);
        for(int i = 0; i<n;i++){
            cin>>v[i];
        }
        int mn = minv(v);
        int mx = maxv(v);
        int res = 0;
        int tt = n*n;
        while(tt--){
            for(int ind = 0; ind<n-1;ind++){
                if(v[ind]>v[ind+1]){
                    swap(v[ind],v[ind+1]);
                    res++;
                }
        }
    }
    cout<<"Optimal train swapping takes "<<res<<" swaps."<<endl;
}



/*
3
3
1 3 2
4
4 3 2 1
2
2 1
*/

return 0;
}



