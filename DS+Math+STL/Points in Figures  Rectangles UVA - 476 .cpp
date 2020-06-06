
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
const int maxn = 20100;



int main(){
        _

        double x,y,x1[maxn], y1[maxn], x2[maxn], y2[maxn];
        int index = 0;
        int point = 1;
        char ch;
        while(1){
            cin >> ch;
            if(ch=='*')break;
            cin >> x1[index] >> y1[index] >> x2[index] >> y2[index];
            index++;
        }
        while(1){

                cin >> x >> y;
                if(x==9999.9 and y==9999.9) break;
                bool present = false;
                for(int i = 0; i<index; i++){
                    if(x>x1[i] and x<x2[i] and y<y1[i] and y>y2[i]){
                        cout<<"Point "<<point<<" is contained in figure "<<i+1<<endl;
                        present = true;
                    }
                }
                if(!present){
                    cout<<"Point "<<point<<" is not contained in any figure"<<endl;
                }

                point ++;
        }

return 0;
}


