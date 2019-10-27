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
        vector<int>chek;
        for(int i = 0; i<s.length()-2;i++){
            if(s[i]==s[i+1]){
                s[i+1] = 'A';
            }
        }
        bool ek = false,dui=false,tin=false,pas = false;
        int e = 0,d=0,t=0,p=0;
        for(int i = 0; i<s.length();i++)
        {
            if(s[i]=='B' or s[i]=='F' or s[i]=='P' or s[i]=='V'){
                if(ek==true and e==0){
                    continue;
                }
                else {
                        chek.pb(1);
                        ek = true;
                        e = 0;
                    }
                d++;
            }
            else if(s[i]=='C' or s[i]=='G' or s[i]=='J' or s[i]=='K' or s[i]=='Q' or s[i]=='S' or s[i]=='X' or s[i]=='Z'){
                chek.pb(2);
                dui = true;
                e++;
                t++
                ek =false;
                tin =false;

            }
            else if(s[i]=='D' or s[i]=='T'){
                chek.pb(3);
                ek++;
            }
            else if(s[i]=='L'){
                chek.pb(4);
            }
            else if(s[i]=='M' or s[i]=='N'){
                chek.pb(5);
                ek++;
            }
            else if(s[i]=='R'){
                chek.pb(6);
            }
        }
        for(auto x: chek)cout<<x;

        cout<<endl;
    }




return 0;
}



