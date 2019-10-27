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
int sum(int n)
{
    return n == 0 ? 0: n%10+sum(n/10);
    //return n == 0 ? 0 : n%10 + sum(n/10) ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    string s,t;
    double res=0.0,res2=0.0,ans;
    while(cin>>s>>t)
    {
        for(int i = 0; i<s.size();i++){
            if(s[i]>='A' and s[i]<='Z'){
                s[i] +=32;
            }
        }
        int res = 0;
        for(int i = 0; i<s.size();i++){
            res+= s[i] - 'a';
            res+=1;
        }
        while(true){
            if(res<10)break;
            res = sum(res);
        }
        for(int i = 0; i<t.size();i++){
            if(t[i]>='A' and t[i]<='Z'){
                t[i] +=32;
            }
        }
        //int res2 = 0;
        for(int i = 0; i<t.size();i++){
            res2+= t[i] - 'a';
            res2+=1;
        }
        while(true){
            if(res2<10)break;
            res2 = sum(res2);
        }
        if(res>res2){
            double temp = res2;
            res2 = res;
            res = temp;
        }
        cout<<res<<" "<<res2<<endl;
         ans = double(res2/res) * 100;
        cout<<ans<<"%"<<endl;
    }




return 0;
}



