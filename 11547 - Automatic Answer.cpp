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
    long long  a,b,c,d,e,f,g,h,j,k,m,n;
        while(t--)
        {
            cin>>a;
                a= a*567;
                a = a/9;
                a+=7492;
                a*=235;
                a/=47;
                a = a - 498;
                a/=10;
                a%=10;
                a = abs(a);
                cout<<a<<endl;
        }

return 0;
}

