#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define gcd(a,b)       __gcd(a, b)
#define lcm(a,b)       a * (b / gcd(a, b))
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test ;
    cin>>test;
    int L,W,H;
        for(int i = 1; i<=test;i++)
        {
            cin>>L>>W>>H;
                if(L<=20 and W<=20 and H<= 20)
                {
                    cout<<"Case "<<i<<": good"<<nl;
                }
                else
                    cout<<"Case "<<i<<": bad"<<nl;
        }

return 0;
}
