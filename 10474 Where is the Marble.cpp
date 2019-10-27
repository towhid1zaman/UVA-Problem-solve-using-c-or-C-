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
int bsearch(int v[],int n,int chek){
    int low = 1;
    int high = n;
    int  R= -1;
    while(low<=high){
        ll mid = (low+high)>>1;
        if(v[mid]==chek){
           R = mid;
            high = mid-1;
        }
        else if(v[mid]<chek){
            low = mid+1;
        }
        else high  = mid -1;
    }
    return R;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int n,q;
    int tc = 1;
    while(scanf("%d %d",&n,&q)==2)
    {
        //scanf("%lld %lld",&n,&q);
        if(n==0 and q==0){
            break;
        }
    //else
        int v[n+5];
        for(int i = 1; i<=n;i++){
                scanf("%lld",&v[i]);
        }
        //quickSort(v,1,n);
        sort(v+1,v+n+1);
//        int que[q+5];
//        for(int i = 1;i<=q;i++){
//            cin>>que[i];
//        }
        cout<<"CASE# "<<tc<<":"<<endl;
        for(int j = 0; j<q;j++){
                int Q;
                scanf("%d",&Q);
            int res = bsearch(v,n,Q);
            if(res==-1){
                cout<<Q<<" not found"<<endl;
            }
            else{
                //cout<<"CASE# "<<tc<<":"<<endl;
                cout<<Q<<" found at "<<res<<endl;
            }
        }
        tc++;
    }
/*
5 1
1
3
3
3
5
3
5 2
1
3
3
3
1
2
3
0 0
*/

return 0;
}



