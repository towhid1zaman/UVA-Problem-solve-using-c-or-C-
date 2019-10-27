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
    int T;
    cin>>T;
    for(int i = 1; i<=T;i++)
    {
        int t1,t2,f,a;
        int ct[3];
        cin>>t1>>t2>>f>>a>>ct[0]>>ct[1]>>ct[2];
        sort(ct,ct+3);
        int avct = (ct[1]+ct[2])/2;
        int res = t1+t2+f+a+avct;
        //cout<<res<<endl;
        if(res>=90){
            cout<<"Case "<<i<<": A"<<endl;
        }
        else if(res>=80 and res<90){
            cout<<"Case "<<i<<": B"<<endl;
        }
        else if(res>=70 and res<80){
            cout<<"Case "<<i<<": C"<<endl;
        }
        else if(res>=60 and res<70){
            cout<<"Case "<<i<<": D"<<endl;
        }
        else if(res<60){
            cout<<"Case "<<i<<": F"<<endl;
        }
    }




return 0;
}



