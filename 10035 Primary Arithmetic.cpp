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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int x,y;
    while(cin>>x>>y){
            if(x==0 and y==0)break;
        int cnt = 0;
        int a,b,c=0;
        while(x || y){
//            if(x<1 or y<1){
//                break;
//            }
            a = x%10;
            x/=10;
            b = y%10;
            y/=10;
            int res = a+b+c;
            if(res>9){
                cnt++;
                c=1;
            }
            else c = 0;
        }

    if(cnt==0){
        cout<<"No carry operation."<<endl;
    }
    else if(cnt==1){
        cout<<cnt<<" carry operation."<<endl;
    }
    else{
        cout<<cnt<<" carry operations."<<endl;
    }
    }




return 0;
}



