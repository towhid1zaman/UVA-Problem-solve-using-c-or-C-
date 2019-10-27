#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define gcd(a,b)       __gcd(a, b)
#define lcm(a,b)       a * (b / gcd(a, b))
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s1 = "Hajj";
    string s2 = "Umrah";
    string s3 = "*";
        string s;
            for(int i = 0;;i++)
            {
                    cin>>s;
                    if(s==s1)
                        cout<<"Case "<<i+1<<": Hajj-e-Akbar"<<nl;
                    if(s==s2)
                        cout<<"Case "<<i+1<<": Hajj-e-Asghar"<<nl;
                    if(s==s3)
                        break;
            }
return 0;
}

