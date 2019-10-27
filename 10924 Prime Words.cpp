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
const int N = 200000;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    //seive();
    string s;
    int sum;
    while(cin>>s){
        int  n = s.length();
        int res = 0;
        bool f = 1;
        for(int  i = 0; i<n;i++){
            if(s[i]>='a' and s[i]<='z'){
                sum=s[i] - 96;
            }
            else{
                sum=s[i] - 38;
            }
            res+=sum;
        }
        for(int i = 2; i<res;i++){
            if(res%i==0)f = 0;
        }
        //cout<<res<<endl;
       if(f){
            cout<<"It is a prime word."<<endl;
       }
       else cout<<"It is not a prime word."<<endl;
    }




return 0;
}



