
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
                if(n==0)break;
                int mat[n+1][n+1];
                int cnt = 0;
                bool f = 0;
                int sum = 0;
                int r = 0;
                int c = 0;
                for(int i = 0; i<n; i++){
                    for(int j = 0; j<n; j++){
                        cin >> mat[i][j];
                        sum+=mat[i][j];
                    }
                    if(sum%2==1){
                        cnt++;
                        r = i;
                    }
                    sum = 0;
                }
                sum = 0;
                int cnt1=0;
                for(int i = 0; i<n; i++){
                    for(int j = 0; j<n; j++){
                        sum+=mat[j][i];
                    }
                    if(sum%2==1){
                        cnt1++;
                        c = i;
                    }
                    sum = 0;
                }
                if(cnt1>1 or cnt>1)cout<<"Corrupt"<<endl;
                else if(cnt1==0 and cnt==0)cout<<"OK"<<endl;
                else{
                    cout<<"Change bit ("<<r+1<<","<<c+1<<")"<<endl;
                }

        }

return 0;
}


