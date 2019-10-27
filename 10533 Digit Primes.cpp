//https://youtu.be/3I3l-x93kOY
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define scan(n) scanf("%d", &n)
#define pin(n) printf("%d\n",n)
#define scanl(n) scanf("%lld", &n)
#define pll(n) printf("%lld\n",n)
const int mod = 1000000007; // (int)1e9+7
const int N = 1000000;
vector<int>prefix;
bitset<N>prime;
void seive()
    {
        prime[0]=prime[1]=1;
        for(int i=4;i<N;i+=2)prime[i]=1;
        for(int i=3;i<=sqrt(N);i+=2){
            if(prime[i]==0){
                for(int j=i*i;j<N;j+=i)prime[j]=1;
            }
        }
    }
int sum(int n)
{
   return n == 0 ? 0 : n%10 + sum(n/10) ;
}
int main(){
		IO
        int cnt = 0;
        seive();
        for(int i = 0;i<=1000000;i++)
        {
            if(prime[i]==false and prime[sum(i)]==false)
            {
                cnt++;
            }
            prefix.push_back(cnt);
        }
        int n;
        cin>>n;
        while(n--)
        {
            int left,right;
            cin>>left>>right;
            printf("%d\n",prefix[right]-prefix[left-1]);
        }








return 0;
}


