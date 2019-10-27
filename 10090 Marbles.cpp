#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second

#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define check() {printf("OK\n");}
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())

#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())

#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) srt(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7
LL gcd(LL a, LL b)
{
    return b==0 ? a : gcd(b, a%b);
}

int main(){f();

        LL n;
        LL c1,n1,c2,n2;
        while(true)
        {
            cin>>n;
            if(n==0)
            {
                break;
            }
            cin>>c1>>n1;
            cin>>c2>>n2;
            LL x = c1 * n1;
            LL y = c2 * n2;
            cout<<gcd(x,y)<<endl;
        }

return 0;
}


