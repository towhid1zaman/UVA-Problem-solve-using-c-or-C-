
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
            if(n==2){
                cout<<"00"<<endl<<"01"<<endl<<"81"<<endl;
            }
            else if(n==4){
                cout<<"0000"<<endl<<"0001"<<endl<<"2025"<<endl<<"3025"<<endl<<"9801"<<endl;
            }
            else if(n==6){
                cout<<"000000"<<endl<<"000001"<<endl;
                cout<<"088209"<<endl<<"494209"<<endl<<"998001"<<endl;
            }
            else if(n==8){
                cout<<"00000000"<<endl;
                cout<<"00000001"<<endl;
                cout<<"04941729"<<endl;
                cout<<"07441984"<<endl;
                cout<<"24502500"<<endl;
                cout<<"25502500"<<endl;
                cout<<"52881984"<<endl;
                cout<<"60481729"<<endl;
                cout<<"99980001"<<endl;
            }
        }


return 0;
}


