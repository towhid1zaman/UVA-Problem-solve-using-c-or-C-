#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = 200100;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int t = s.length();
        if(t==3){
            int one = 0;
            for(int i = 0; i<3;i++){
                if(s[i]=='o' or s[i]=='n' or s[i]=='e'){
                    one++;
                }

            }
            if(one>=2){
                    cout<<1<<endl;
                    continue;
            }
            int two=0;
            for(int i = 0; i<3;i++){
                if(s[i]=='t' or s[i]=='w' or s[i]=='o'){
                    two++;
                }
            }
            if(two>=2){
                    cout<<2<<endl;
                continue;
            }
            int ten= 0;
            for(int i = 0; i<3;i++){
                if(s[i]=='t' or s[i]=='e' or s[i]=='n'){
                    ten++;
                }
            }
            if(ten>=2)
            {
                cout<<10<<endl;
                continue;
            }
            int six=0;
            for(int i = 0; i<3;i++){
                if(s[i]=='s' or s[i]=='i' or s[i]=='x'){
                    six++;
                }
            }
            if(six>=2){
                cout<<6<<endl;
                continue;
            }
        }
        else if(t==4){
            int four=0;
            for(int i = 0; i<4;i++){
                if(s[i]=='f' or s[i]=='o' or s[i]=='u' or s[i]=='r'){
                    four++;
                }
            }
            if(four>=3)
            {
                cout<<4<<endl;
                continue;
            }
            int five= 0;
            for(int i = 0; i<4;i++){
                if(s[i]=='f' or s[i]=='i' or s[i]=='v' or s[i]=='e'){
                    five++;
                }
            }
            if(five>=3){
                cout<<5<<endl;
                continue;
            }
            int nine = 0;
            for(int i = 0; i<4;i++){
                if(s[i]=='n' or s[i]=='i' or s[i]=='e'){
                    nine++;
                }
            }
            if(nine>=3)
            {
                cout<<9<<endl;
                continue;
            }
        }
        else if(t==5){
            int three = 0;
            for(int i = 0; i<5;i++){
                if(s[i]=='t' or s[i]=='h' or s[i]=='r' or s[i]=='e'){
                    three++;
                }
            }
            if(three>=4){
                cout<<3<<endl;
                continue;
            }
            int seven=0;
            for(int i =0;i<5;i++){
                if(s[i]=='s' or s[i]=='e' or s[i]=='v' or s[i]=='n')seven++;
            }
            if(seven>=4)
            {
                cout<<7<<endl;
                continue;
            }

            int eight = 0;
            for(int i = 0; i<5;i++){
                if(s[i]=='e' or s[i]=='i' or s[i]=='g' or s[i]=='h' or s[i]=='t')eight++;
            }
            if(eight>=4)
            {
                cout<<8<<endl;
                continue;
            }
        }
    }


return 0;
}




