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
    string s;
    cin>>t;
        for(int i = 0; i<t;i++)
        {
                cin>>s;
                int len = s.length();
                if(s=="1" || s=="4" || s=="78")
                {
                    cout<<"+"<<nl;
                }
                else if(s[len-2] =='3' && s[len-1] =='5')
                {
                    cout<<"-"<<nl;
                }
               else  if(s[0]=='9' && s[len-1] == '4')
                {
                    cout<<"*"<<nl;
                }
                else
                {
                    cout<<"?"<<nl;
                }
        }


return 0;
}

