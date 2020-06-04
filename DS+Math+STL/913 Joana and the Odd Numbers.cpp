
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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
        _ios;

        ll n;
        while(cin >> n){
            ll Num = (n/2)+1;
            Num*=Num;
            Num = (Num*2 - 1)*3 - 6;
            cout<<Num<<endl;
        }


return 0;
}
/*
We can solve this problem by making a number of
observations about the sequence of odd numbers.
We’re given the number of elements in the row of interest.
The (number of elements in a row / 2) is the row number.
We can observe that the square of the row number is the
number of the last element in the row in the whole sequence.

For example:

1
3 5 7           <- row 2
9 11 13 15 17   <- row 3

7 is the 2^2 element
17 is the 3^2 element
From here, it is trivial to calculate the value of the last
odd number in any row (((row number)^2)*2-1).
The rest should be obvious. You’ll need to use long longs as the largest output can reach 2^63.

*/
