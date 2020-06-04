
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
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
const int maxn = 2000100;

int main(){
        _
        int T; cin >> T;
        while(T--){
            int x,y; cin >> x >> y;
            int step = 1;
            int len = y-x;
            int p = 0;
            int ans = 0;
            while(len>0){
                len-=step;
                ans++;
                if(p)step++;
                p^=1;
            }
            cout<<ans<<endl;
        }


return 0;
}
/*
relationship between the number of steps and the distance.



বলা হচ্ছে যে , তোকে x থেকে y এ যেতে হবে ।
প্রথম স্টেপে এবং শেষ স্টেপে তুই হায়েস্ট ১ একক যেতে পারবি ।
এর মধ্যে বাকী স্টেপগুলোর ক্ষেত্রে লেন্থ এক এর বেশী হতেই পারে , তবে তা আগের স্টেপের সাথে সম্পর্কিত হবে ।
সম্পর্কটা এমন যে আগের স্টেপে যা যাবি এই স্টেপে তাঁর সমান বা তাঁর চেয়ে এক কম/ বেশী হতে পারে ।
এগুলো মেনে সবচেয়ে কম কত স্টেপে যাবি সেটা বের করতে হবে


There is also a non-mathematical method that is easier to think of.
Because of the requirements for the first and last step, both are 1.
It is easy to think of going from the two sides to the middle.
Then every two steps (one step in each direction), and then increase the step length.
*/

