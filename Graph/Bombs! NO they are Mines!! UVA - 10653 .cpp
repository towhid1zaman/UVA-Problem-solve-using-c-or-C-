
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
const int maxn = 1001;
const int kx[8] = {-2, -2, -1, 1, -1, 1, 2, 2},ky[8] = {1, -1, -2, -2, 2, 2, -1, 1}; //knight
const int dx8[8] = {1, 0, -1, 0, 1, 1, -1, -1},dy8[8] = {0, 1, 0, -1, -1, 1, -1, 1}; //king
const int dx4[4] = {1,0,-1,0}, dy4[4] = {0,1,0,-1};

int r,c;
int grid[1001][1001];
int level[1001][1001];
bool gridCheck(int x, int y) {
    return x >= 0 && y >= 0 && x < r && y < c;
}

void bfs(int r,int c){
    queue<pair<int,int>>q;
    q.push({r,c});
    level[r][c] = 0;
    while(!q.empty()){
        int cur_row = q.front().first;
        int cur_col = q.front().second;
        q.pop();
        for(int i = 0; i<4; i++){
            int x = cur_row+ dx4[i];
            int y = cur_col + dy4[i];
            if(gridCheck(x,y) and grid[x][y]==0){
                grid[x][y]=1;
                level[x][y] = level[cur_row][cur_col] + 1;
                q.push({x,y});
            }
        }
    }
}

int main(){
        _
        while(cin >> r >> c){
            if(!r)break;
            fill(grid,0);
            fill(level,0);
            int row; cin >> row;
            while(row--){
                int R,C,X; cin >> R >> X;
                while(X--){
                    cin >> C;
                    grid[R][C] = 1;
                }
            }
            int sr,sc,tr,tc;
            cin >> sr >> sc;
            bfs(sr,sc);
            cin >> tr >> tc;
            cout<<level[tr][tc]<<endl;
        }


return 0;
}



