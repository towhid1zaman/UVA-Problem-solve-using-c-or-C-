#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define gcd(a,b)       __gcd(a, b)
#define lcm(a,b)       a * (b / gcd(a, b))
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll test;
    cin>>test;
        string s = "donate";
        string r = "report";
        string t,tt;
        int x;
        int sum = 0;
       // int k = test/2;
        while(test--)
        {
           cin>>t;
           if(t==s){
                cin>>x;
                sum+=x;
                }
            if(t==r)cout<<sum<<nl;
        }

    return 0;
}
