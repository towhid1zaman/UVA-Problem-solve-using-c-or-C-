
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
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 2000100;

int kx[]={-2,-2,-1,1,-1,1,2,2};
int ky[]={1,-1,-2,-2,2,2,-1,1};

string s,d;
int source_row, source_col, target_row, target_col;
queue<pair<int,int> >q;
int level[10][10];

bool chek(int i,int j){
    return !(i<1 or j<1 or i>8 or j>8);
}

int bfs(){
        fill(level,-1);
        q.push({source_row,source_col});
        level[source_row][source_col] = 0;
        int row, col,x,y;
        while(!q.empty()){
            row = q.front().first;
            col = q.front().second;
            q.pop();

            for(int i = 0; i<8; i++){
                x = kx[i]+row;
                y = ky[i]+col;
                if(chek(x,y) and level[x][y]==-1){
                    level[x][y]  = level[row][col] +1;
                    q.push({x,y});
                }
            }
        }

        return level[target_row][target_col];
}

int main(){
        _

        while(cin >> s >> d){
            source_row = s[0]-'a'+1;
            source_col = s[1]-'0';

            target_row = d[0]-'a'+1;
            target_col = d[1]-'0';
            int res = bfs();
            cout<<"To get from "<< s <<" to "<< d <<" takes "<< res <<" knight moves."<<endl;

        }


return 0;
}


