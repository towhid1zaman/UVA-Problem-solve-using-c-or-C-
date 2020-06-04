
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
const int maxn = 200100;

//Convert int to string
template <typename T>
string to_str(T str)
{
    stringstream stream;
    stream << str;
    return stream.str();
}

//Convert string to int
template <typename T>
int to_int(T num)
{
    int val;
    stringstream stream;
    stream << num;
    stream >> val;
    return val;
}
char s[maxn];
int main(){
        _

        while(gets(s)){
                string res;
                bool f = false;
                for(int i = 0; s[i]; i++){
                    if(s[i]>='0' and s[i]<='9'){
                        res+=s[i];
                        f = true;
                    }
                    else{
                            int num = (int)s[i];
                            string str = to_string(num);
                            reverse(all(str));
                            res = str+res;
                    }
                }
                if(f){
                    reverse(all(res));
                    for(int i = 0;i<res.size()-1; i+=2){
                        string t ="";
                        t+= res[i];
                        t+=res[i+1];
                        int num = to_int(t);
                        cout<<char(num);
                        t.clear();
                    }
                    cout<<endl;
                }
                else cout<<res<<endl;
                res.clear();

        }

return 0;
}


