
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< ll, ll > pii;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) (v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;
const int maxn = 2000100;


int main(){
        _
        int n; cin >> n;
        int f=0;
        cin.ignore();
        while(n--){
           if(f)cout<<endl;
            f = 1;
            string a,b;
            getline(cin, a);
            getline(cin, a);
            getline(cin, b);
            vector<int> freqa(255);
            vector<int> freqb(255);

            for(auto c:a)freqa[c]++;
            for(auto c:b)freqb[c]++;

            set<pii>lowera;
            set<pii>lowerb;

            for(char ch = 'a'; ch<='z'; ch++){
                lowera.insert({freqa[ch],ch});
                lowerb.insert({freqb[ch],ch});
            }
            for(char ch = 'A'; ch<='Z'; ch++){
                lowera.insert({freqa[ch],ch});
                lowerb.insert({freqb[ch],ch});
            }

            vector<int>maping(255,0);
            auto it1 = lowera.begin();
            auto it2 = lowerb.begin();

            while(it1 != lowera.end()){
                maping[(*it2).ss] = (*it1).ss;
                it1 = next(it1);
                it2 = next(it2);
            }
            //string ans = b;
            for(int i = 0; i<b.size(); i++){
                b[i] = maping[b[i]];
            }
            cout<<b<<endl;
        }

return 0;
}
