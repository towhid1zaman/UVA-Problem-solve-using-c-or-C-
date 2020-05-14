#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const int INF = 1e9 + 10;
const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;
int sum(int  n)
{
   return n == 0 ? 0 : n%10 + sum(n/10) ;
}

int main(){
        _ios;

        string a,b;
        int res1,res2;
        while(getline(cin,a)){
                getline(cin,b);
            res1=res2=0;
            for(int i = 0; i<sz(a);i++){
                if(a[i]>='a' and a[i]<='z'){
                    res1+=(a[i] - 'a')+1;
                }
                if(a[i]>='A' and a[i]<='Z'){
                    res1+=(a[i] - 'A')+1;
                }
            }
             for(int i = 0; i<sz(b);i++){
                if(b[i]>='a' and b[i]<='z'){
                    res2+=(b[i] - 'a')+1;
                }
                if(b[i]>='A' and b[i]<='Z'){
                    res2+=(b[i] - 'A')+1;
                }
            }
            while(true){
                    if(res1<10)break;
                res1 = sum(res1);
            }
            while(true){
                    if(res2<10)break;
                    res2 = sum(res2);
            }
            sp(2);
            if(res1==res2){
                cout<<"100.00 %"<<endl;
            }
            else if(res1<res2){
                double  r=(double)res1/(double)res2;
                r*=100;
                cout<<r<<" %"<<endl;
            }
            else{
                double  r=(double)res2/(double)res1;
                r*=100;
                cout<<r<<" %"<<endl;
            }
        }





return 0;
}




