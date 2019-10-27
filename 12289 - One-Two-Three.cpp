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
                 int c = 0;
            string s;
            cin>>s;
            int len = s.length();
                if(len>=5) cout<<"3"<<endl;
                else
                {
                    if(s[0]=='t')c++;
                    if(s[1]=='w')c++;
                    if(s[2]=='o')c++;
                            if(c>=2) cout<<"2"<<endl;
                            else cout<<"1"<<endl;
                }
        }

return 0;
}
