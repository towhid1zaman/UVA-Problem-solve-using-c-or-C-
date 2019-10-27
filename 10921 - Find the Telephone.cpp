#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = 200010;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    string s;
    while(cin>>s)
    {
        for(int i = 0; i<s.length();i++){
        if(s[i]>='0' and s[i]<='9')cout<<s[i];
        else if(s[i]=='-')cout<<s[i];
        else if(s[i]=='A' or s[i]=='B' or s[i]=='C')cout<<'2';
        else if(s[i]=='D' or s[i]=='E' or s[i]=='F')cout<<'3';
        else if(s[i]=='G' or s[i]=='H' or s[i]=='I')cout<<'4';
        else if(s[i]=='J' or s[i]=='K' or s[i]=='L')cout<<'5';
        else if(s[i]=='M' or s[i]=='N' or s[i]=='O')cout<<'6';
        else if(s[i]=='P' or s[i]=='Q' or s[i]=='R' or s[i]=='S')cout<<'7';
        else if(s[i]=='T' or s[i]=='U' or s[i]=='V')cout<<'8';
        else if(s[i]=='W' or s[i]=='X' or s[i]=='Y' or s[i]=='Z')cout<<9;
        }
        cout<<endl;
    }




return 0;
}



