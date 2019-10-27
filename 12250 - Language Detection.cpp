#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define gcd(a,b)       __gcd(a, b)
#define lcm(a,b)       a * (b / gcd(a, b))
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int i = 1;
      string s;
        while(cin>>s)
        {
                    if(s=="#") break;
                    cout<<"Case "<<i++<<": ";
                    if(s=="HELLO") cout<<"ENGLISH";
                    else if(s=="HOLA") cout<<"SPANISH";
                    else if(s=="HALLO") cout<<"GERMAN";
                    else if(s=="BONJOUR")cout<<"FRENCH";
                    else if(s=="CIAO")cout<<"ITALIAN";
                    else if(s=="ZDRAVSTVUJTE")cout<<"RUSSIAN";
                    else cout<<" UNKNOWN";
                    cout<<endl;
        }

return 0;
}

