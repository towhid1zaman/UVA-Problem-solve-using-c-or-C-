#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int test;
    cin>>test;
        while(test--)
        {
            int x;
            cin>>x;
            int k = x/2;
            int sum= 0;
                int u,v;
                    while(k--)
                    {
                        cin>>u>>v;
                        sum+= 2*(v-u);
                    }
                    cout<<sum<<nl;
        }

return 0;
}

