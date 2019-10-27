#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ll;
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
const int N = 2000000;
char n[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int nl = 0;
    while(cin>>n){
            if(nl !=0){
                cout<<endl;
            }
            nl = 1;
            bool f = false,lp = false;
            ll mod4=0,mod100=0,mod400=0,mod15=0,mod55=0;
            for(int i = 0; i<strlen(n);i++){
                mod4 = ((mod4*10)+(n[i]-'0'))%4;
                mod100 = ((mod100*10)+(n[i]-'0'))%100;
                mod400 = ((mod400*10)+(n[i]-'0'))%400;
                mod15 = ((mod15*10)+(n[i]-'0'))%15;
                mod55 = ((mod55*10)+(n[i]-'0'))%55;
            }
        if(mod400==0 or (mod4==0 and mod100 !=0)){
                cout<<"This is leap year."<<endl;
                f = true,lp = true;
    }
    if(mod15==0){
            cout<<"This is huluculu festival year."<<endl;
            f = true;
    }
    if(mod55==0 and lp ==true){
                cout<<"This is bulukulu festival year."<<endl;
    }
    if(f==false )cout<<"This is an ordinary year."<<endl;

}


return 0;
}



