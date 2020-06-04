
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
        int test,cs=1;
        double u,v,s,t,a;
        while(scanf("%d",&test)&&test)
        {
            if(test==1)
            {
                scanf("%lf %lf %lf",&u,&v,&t);
                a=(v-u)/t;
                s=(v*v -u*u)/(2*a);
                printf("Case %d: %.3lf %.3lf\n",cs++,s,a);
                 continue;
            }
            if(test==2)
            {
                scanf("%lf %lf %lf",&u,&v,&a);
                t=(v-u)/a;
                s=(v*v -u*u)/(2*a);
                 printf("Case %d: %.3lf %.3lf\n",cs++,s,t);
                 continue;
            }
            if(test==3)
            {
                scanf("%lf %lf %lf",&u,&a,&s);
                v=sqrt(u*u + 2 *a *s);
                 t=(v-u)/a;
                 printf("Case %d: %.3lf %.3lf\n",cs++,v,t);
                continue;
            }
            if(test==4)
            {
                scanf("%lf %lf %lf",&v,&a,&s);
                u = sqrt(v*v - 2 * a * s );
                t = (v-u)/a;
                printf("Case %d: %.3lf %.3lf\n",cs++,u,t);
                continue;
            }
        }

return 0;
}

