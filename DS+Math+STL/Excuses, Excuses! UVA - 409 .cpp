
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
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

ll search(string a, string b){
    std::transform(a.begin(), a.end(), a.begin(), ::tolower);
    std::transform(b.begin(), b.end(), b.begin(), ::tolower);

    int wordlength = a.length();
    string tempword="";
    ll cnt = 0;
    for(int i = 0; i<wordlength; i++){
        if(!isalpha(a[i])){
            if(tempword==b){
                cnt++;
            }
            tempword="";
        }
        else{
            tempword+=a[i];
        }
    }
    if(tempword==b)cnt++;

    return cnt;
}

int main(){
        _
        ll n,m;
        ll counter = 0;
        while(cin >> n >> m){
            string k[n], line[m];
            cin >> ws;
            for(ll i = 0; i<n; i++){
                getline(cin, k[i]);
            }
            cin >> ws;
            for(ll i = 0; i<m; i++){
                getline(cin, line[i]);
            }

            map<string, ll> M;
            for(ll i = 0; i<m; i++){
                for(ll j = 0; j<n; j++){
                    ll fin = search(line[i], k[j]);
                    if(!M.count(line[i])) M[line[i]] = fin;
                    else M[line[i]] +=fin;
                }
            }

            ll maxi = 0;
            for(auto it: M){
                maxi = max(maxi, it.ss);
            }
            cout<<"Excuse Set #"<<++counter<<endl;
            for(auto it : M){
                if(it.ss==maxi){
                    cout<<it.ff<<endl;
                }
            }
            M.clear();
            cout<<endl;
        }


return 0;
}

/*
    //string getline process,
    string  s;
    cin >> ws;
    /// getline leaves whitespaces where they are if they don't fit in the line
    // cin >> ws will discard those
    getline(cin, s);


*/
