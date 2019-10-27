#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(n) for(size_t i=1;i<=n;i++)
const double pi= acos(-1);
ll bigmod(ll a, ll b, ll m)
{
    if(b==0) return 1%m;
    if(b%2==0)
    {
        ll value = bigmod(a,b/2,m);
        return (value*value)%m;
    }
    else if(b%2==1)
    {
        ll x, y;
        x = a%m;
        y = bigmod(a,b-1,m);
        return (x*y) % m;
    }
}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll a,b,m;
            while(cin>>a>>b>>m)
            {
                cout<<bigmod(a,b,m)<<endl;
            }

    return 0;
}


