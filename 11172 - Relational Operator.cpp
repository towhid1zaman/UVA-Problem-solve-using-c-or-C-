#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define gcd(a,b)       __gcd(a, b)
#define lcm(a,b)       a * (b / gcd(a, b))
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
            cin>>m>>n;
                if(m>n)cout<<">"<<nl;
                if(m<n)cout<<"<"<<nl;
                if(m==n)cout<<"="<<nl;
    }

return 0;
}

