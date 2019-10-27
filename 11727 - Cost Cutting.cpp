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
    int taka[3];
    cin>>t;
    int i = 1;
        while(t--)
        {
                    for(int j = 1;j<=3;j++)
                    {
                        cin>>taka[j];
                    }
                    sort(taka,taka+4);
                        cout<<"Case "<<i<<": "<<taka[2]<<endl;
                        i++;
        }



return 0;
}

