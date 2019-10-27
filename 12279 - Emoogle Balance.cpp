#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define gcd(a,b)       __gcd(a, b)
#define lcm(a,b)       a * (b / gcd(a, b))
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int u = 1;
        while(1)
        {
             int n;
                cin>>n;
                    if(n==0)break;
                    int nz = 0;
                    int z = 0;
                    int x;
                        for(int i=0; i<n;i++)
                        {
                            cin>>x;
                                if(x==0)z++;
                                else nz++;
                        }
                        cout<<"Case "<<u<<": "<<nz-z<<nl;
                        u++;
        }

        return 0;


return 0;
}

